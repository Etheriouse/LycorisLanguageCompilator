
#include "lib/utils.h"
#include "lib/symbole_table.h"
#include <iostream>
#include <vector>
#include "lib/console.h"

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
        vector<Definition *> instrs;
        for (auto expr : ctx->definition())
        {
            instrs.push_back(any_cast<Definition *>(expr->accept(this)));
        }
        Program *p = new Program(instrs);
        return p;
    }

    std::any visitDefinition(lycorisParser::DefinitionContext *ctx) override
    {
        Type t = any_cast<Type>(ctx->type()->accept(this));
        string name = ctx->IDENT()->getText();
        vector<Definition::Parameter> param = any_cast<vector<Definition::Parameter>>(ctx->paramfunction()->accept(this));
        Instruction *i = any_cast<Instruction *>(ctx->instruction()->accept(this));
        return new Definition(t, name, param, i);
    }

    std::any visitParamfunction(lycorisParser::ParamfunctionContext *ctx) override
    {
        vector<Definition::Parameter> param;
        if (ctx->t1)
        {
            if (ctx->t1->type()->children.size() > 1 && ctx->t1->staticarr()->INT().size() > 0)
                throw runtime_error("can't create a pointer static array");

            Type t = any_cast<Type>(ctx->t1->type()->accept(this));
            if (ctx->t1->type()->children.size() > 1)
            {
                for (auto child : ctx->t1->type()->children)
                {
                    if (child->getText() == "*")
                    {
                        t = Type::Pointer(t);
                    }
                }
            }
            for (auto size : ctx->t1->staticarr()->INT())
            {
                t = Type::Array(t, stoi(size->getText()));
            }
            param.push_back((Definition::Parameter){t, ctx->t1->IDENT()->getText()});
            return param;
        }
        else if (ctx->tn)
        {
            for(auto param_ : ctx->mulparam()) {
                if (param_->tn->type()->children.size() > 1 && param_->tn->staticarr()->INT().size() > 0)
                    throw runtime_error("can't create a pointer static array");
    
                Type t = any_cast<Type>(param_->tn->type()->accept(this));
                if (param_->tn->type()->children.size() > 1)
                {
                    for (auto child : param_->tn->type()->children)
                    {
                        if (child->getText() == "*")
                        {
                            t = Type::Pointer(t);
                        }
                    }
                }
                for (auto size : param_->tn->staticarr()->INT())
                {
                    t = Type::Array(t, stoi(size->getText()));
                }
                param.push_back((Definition::Parameter){t, param_->tn->IDENT()->getText()});
            }
            return param;
        }
        else
        {
            return param;
        }
    }

    std::any visitInstruction(lycorisParser::InstructionContext *ctx) override
    {
        if (ctx->ifcond)
        {
            Expression *condition = any_cast<Expression *>(ctx->ifcond->accept(this));
            Instruction *ifblock = any_cast<Instruction *>(ctx->ifblock->accept(this));
            if (ctx->elseblock)
            {
                Instruction *elseblock = any_cast<Instruction *>(ctx->elseblock->accept(this));
                return (Instruction *)new If(condition, ifblock, elseblock);
            }
            else
            {
                return (Instruction *)new If(condition, ifblock);
            }
        }
        else if (ctx->whilecond)
        {
            Expression *condition = any_cast<Expression *>(ctx->whilecond->accept(this));
            Instruction *block = any_cast<Instruction *>(ctx->whileblock->accept(this));
            return (Instruction *)new While(condition, block);
        }
        else if (ctx->forblock)
        {
            log("for");
            // for
        }
        else if (ctx->ret)
        {
            return (Instruction *)new Return(any_cast<Expression *>(ctx->ret->accept(this)));
        }
        else if (ctx->parameter)
        {
            vector<Expression *> parameter;
            for (auto element : ctx->parameter->children)
            {
                parameter.push_back(any_cast<Expression *>(element->accept(this)));
            }
            return (Instruction *)new CallInstruction(new Call(ctx->namec->getText(), parameter));
        }
        else if (ctx->aff)
        {
            string op = ctx->aff->op->getText();
            string name = ctx->namec->getText();
            Expression *e = any_cast<Expression *>(ctx->aff->assign->accept(this));
            vector<Expression *> idx;
            for (auto index : ctx->indexarr())
            {
                idx.push_back(any_cast<Expression *>(index->expr()->accept(this)));
            }
            if (op == "=")
            {
                return (Instruction *)new Affectation(name, e, idx);
            }
            else
            {
                Variable *v = new Variable(name);
                if (op == "+=")
                {
                    return (Instruction *)new Affectation(name, new Binop(Operator::Add(), v, e), idx);
                }
                else if (op == "-=")
                {
                    return (Instruction *)new Affectation(name, new Binop(Operator::Sub(), v, e), idx);
                }
                else if (op == "*=")
                {
                    return (Instruction *)new Affectation(name, new Binop(Operator::Mul(), v, e), idx);
                }
                else if (op == "/=")
                {
                    return (Instruction *)new Affectation(name, new Binop(Operator::Div(), v, e), idx);
                }
                else if (op == "&=")
                {
                    return (Instruction *)new Affectation(name, new Binop(Operator::And(), v, e), idx);
                }
                else if (op == "<>=")
                {
                    return (Instruction *)new Affectation(name, new Binop(Operator::Xor(), v, e), idx);
                }
                else if (op == "|=")
                {
                    return (Instruction *)new Affectation(name, new Binop(Operator::Or(), v, e), idx);
                }
            }
        }
        else if (ctx->var)
        {
            if (ctx->type()->children.size() > 1 && ctx->sarr->INT().size() > 0)
                throw runtime_error("can't create a pointer static array");

            Type t = any_cast<Type>(ctx->type()->accept(this));

            if (ctx->type()->children.size() > 1)
            {
                for (auto child : ctx->type()->children)
                {
                    if (child->getText() == "*")
                    {
                        t = Type::Pointer(t);
                    }
                }
            }

            for (auto size : ctx->sarr->INT())
            {
                t = Type::Array(t, stoi(size->getText()));
            }

            vector<Declaration::Declare> variables;
            string namefirst = ctx->var->getText();
            if (ctx->value)
            {
                Expression *valuefirst = any_cast<Expression *>(ctx->value->accept(this));
                variables.push_back((Declaration::Declare){namefirst, Optional<Expression>::of(valuefirst)});
            }
            else
            {
                variables.push_back((Declaration::Declare){namefirst, Optional<Expression>::empty()});
            }
            for (auto decla : ctx->declaration())
            {
                string name = decla->var->getText();
                if (decla->value)
                {
                    Expression *value = any_cast<Expression *>(decla->value->accept(this));
                    variables.push_back((Declaration::Declare){name, Optional<Expression>::of(value)});
                }
                else
                {
                    variables.push_back((Declaration::Declare){name, Optional<Expression>::empty()});
                }
            }
            return (Instruction *)new Declaration(t, variables);
        }
        else if (ctx->block)
        {
            vector<Instruction *> instrs;
            for (auto instr : ctx->instruction())
            {
                instrs.push_back(any_cast<Instruction *>(instr->accept(this)));
            }
            return (Instruction *)new Block(instrs);
        }
        return (Instruction *)new Return(new Integer(-1));
    }

    std::any visitType(lycorisParser::TypeContext *ctx) override
    {
        Type raw = Type::fromStr(ctx->raw->getText());
        return raw;
    }

    std::any visitExpr(lycorisParser::ExprContext *ctx) override
    {
        Expression *a = any_cast<Expression *>(ctx->a->accept(this));
        if (ctx->b && ctx->c)
        {
            Expression *b = any_cast<Expression *>(ctx->b->accept(this));
            Expression *c = any_cast<Expression *>(ctx->c->accept(this));
            return (Expression *)new Ternary(a, b, c);
        }
        return a;
    }

    std::any visitOr(lycorisParser::OrContext *ctx) override
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
            if (ctx->arr)
            {
                vector<Expression *> idxs;
                for (auto ind : ctx->indexarr())
                {
                    idxs.push_back(any_cast<Expression *>(ind->expr()->accept(this)));
                }
                e = new ArrayAtom(ident, idxs);
            }
            else if (ctx->exprlist())
            {
                vector<Expression *> parameters;
                if (ctx->exprlist()->children.size() > 0)
                {
                    for (auto expr : ctx->exprlist()->expr())
                    {
                        parameters.push_back(any_cast<Expression *>(expr->accept(this)));
                    }
                }
                e = new Call(ident, parameters);
            }
            else
            {
                e = new Variable(ident);
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
        Program *p = any_cast<Program *>(visit.visit(tree));
        p->pretty_print(0);
        delete table;
    }
    return 0;
}
