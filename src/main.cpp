
#include "lib/utils.h"
#include "lib/symbole_table.h"
#include <iostream>
#include <vector>

#include "antlr/lycorisParser.h"
#include "antlr/lycorisLexer.h"
#include "antlr/lycorisBaseVisitor.h"
#include <antlr4-runtime.h>

#include "asd/lycoris_asd.h"

using namespace std;

class Visitor : public lycorisBaseVisitor
{
public:
    std::any visitProg(lycorisParser::ProgContext *ctx) override
    {
        cout << ctx->expr().size() << endl;
        for (auto expr : ctx->expr())
        {
            Expression *a = any_cast<Expression *>(expr->accept(this));
            // cout << a->to_string() << endl;
            a->pretty_print();
            cout << endl;
            cout << a->to_string() << endl;
        }
    }

    std::any visitExpr(lycorisParser::ExprContext *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        for (auto expr : ctx->mor_())
        {
            Expression *b = any_cast<Expression *>(expr->b->accept(this));
            a = new Binop(Operator::Or(), a, b);
        }
        return a;
    }

    std::any visitXor_(lycorisParser::Xor_Context *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        for (auto expr : ctx->mxor_())
        {
            Expression *b = any_cast<Expression *>(expr->b->accept(this));
            a = new Binop(Operator::Xor(), a, b);
        }
        return a;
    }

    std::any visitAnd_(lycorisParser::And_Context *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        for (auto expr : ctx->mand_())
        {
            Expression *b = any_cast<Expression *>(expr->b->accept(this));
            a = new Binop(Operator::And(), a, b);
        }
        return a;
    }

    std::any visitEqual(lycorisParser::EqualContext *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        for (auto expr : ctx->mequal())
        {
            Expression *b = any_cast<Expression *>(expr->b->accept(this));
            if (expr->op->getText() == "==")
            {
                a = new Binop(Operator::Eq(), a, b);
            }
            else
            {
                a = new Binop(Operator::Neq(), a, b);
            }
        }
        return a;
    }

    std::any visitComparaison(lycorisParser::ComparaisonContext *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        for (auto expr : ctx->mcomparaison())
        {
            Expression *b = any_cast<Expression *>(expr->b->accept(this));
            if (expr->op->getText() == "<")
            {
                a = new Binop(Operator::Lt(), a, b);
            }
            else if (expr->op->getText() == ">")
            {
                a = new Binop(Operator::Gt(), a, b);
            }
            else if (expr->op->getText() == "<=")
            {
                a = new Binop(Operator::Le(), a, b);
            }
            else
            {
                a = new Binop(Operator::Ge(), a, b);
            }
        }
        return a;
    }

    std::any visitAddsub(lycorisParser::AddsubContext *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        for (auto expr : ctx->maddsub())
        {
            Expression *b = any_cast<Expression *>(expr->b->accept(this));
            if (expr->op->getText() == "+")
            {
                a = new Binop(Operator::Add(), a, b);
            }
            else
            {
                a = new Binop(Operator::Sub(), a, b);
            }
        }
        return a;
    }

    std::any visitMuldivmod(lycorisParser::MuldivmodContext *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        for (auto expr : ctx->mmuldivmod())
        {
            Expression *b = any_cast<Expression *>(expr->b->accept(this));
            if (expr->op->getText() == "*")
            {
                a = new Binop(Operator::Mul(), a, b);
            }
            else if (expr->op->getText() == "/")
            {
                a = new Binop(Operator::Div(), a, b);
            }
            else
            {
                a = new Binop(Operator::Mod(), a, b);
            }
        }
        return a;
    }

    std::any visitUnary(lycorisParser::UnaryContext *ctx) override
    {
        if (ctx->a)
        {
            return any_cast<Expression *>(ctx->a->accept(this));
        }
        else
        {
            Expression *a = any_cast<Expression *>(ctx->unary()->accept(this));
            if (ctx->op->getText() == "-")
            {
                a = new Unary(Operator::Minus(), a);
            }
            else if (ctx->op->getText() == "!")
            {
                a = new Unary(Operator::Not(), a);
            }
            else if (ctx->op->getText() == "*")
            {
                a = new Unary(Operator::Dereference(), a);
            }
            else
            {
                a = new Unary(Operator::Reference(), a);
            }
            return a;
        }
    }

    std::any visitAtom(lycorisParser::AtomContext *ctx) override
    {
        Expression *e;
        if (ctx->INT())
        {
            e = new Integer(stoi(ctx->INT()->getText()));
        }
        else if (ctx->FLOAT())
        {
            e = new Float(stof(ctx->FLOAT()->getText()));
        }
        else if (ctx->CHAR())
        {
            e = new Char(ctx->CHAR()->getText().c_str()[1]);
        }
        else if (ctx->BOOL())
        {
            e = new Bool(ctx->BOOL()->getText() == "true");
        }
        else if (ctx->STRING())
        {
            std::string str = ctx->STRING()->getText();
            e = new String(str.substr(1, str.size() - 2));
        }
        else if (ctx->IDENT())
        {
            string ident = ctx->IDENT()->getText();
            if (ctx->expr().size() == 0)
            {
                e = new Variable(ident);
            }
            else if (ctx->expr().size() == 1)
            {
                e = new ArrayAtom(ident, any_cast<Expression *>(ctx->expr()[0]->accept(this)));
            }
            else
            {
                vector<Expression *> parameters;
                for (auto expr : ctx->expr())
                {
                    parameters.push_back(any_cast<Expression *>(expr->accept(this)));
                }
                e = new Call(ident, parameters);
            }
        }
        else
        {
            e = new String("not defined");
        }
        return e;
    }
};

int main(int argc, char const *argv[])
{
    if (argc > 1)
    {
        // 0 = executable name
        std::string filename = argv[1];
        SymboleTable *table = new SymboleTable();

        std::ifstream stream;
        stream.open(filename);
        antlr4::ANTLRInputStream input(stream);
        lycorisLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        lycorisParser parser(&tokens);

        antlr4::tree::ParseTree *tree = parser.prog();

        Visitor visit;
        visit.visit(tree);
        //        Program program = any_cast<Program>(visit.visit(tree));

        // Parser *parser = new Parser(filename.c_str(), config.c_str());
        // Program *program = parser->parse();

        // cout << (*program) << endl;
        // program->pretty_print(0);

        // delete program;
        delete table;
    }
    return 0;
}
