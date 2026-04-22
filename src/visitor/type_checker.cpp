#include "type_checker.h"
#include "../lib/console.h"

#define UNUSED(expr) (void)(expr)

TypeChecker::TypeChecker()
{
    this->table = new SymboleTable();
}

TypeChecker::~TypeChecker()
{
    delete table;
}

bool TypeChecker::check(Program *node)
{
    for (auto def : node->defs)
    {
        vector<SymboleTable::Parameter> p;
        for (auto pp : def->parameters)
        {
            p.push_back({pp.name, pp.t});
        }
        table->addf((SymboleTable::Function){def->t, p}, def->name);
        def->block->accept(this, def->t);
    }
}

bool TypeChecker::visitIf(If *node, Type type)
{
    TypeCheckerExpr *tce = new TypeCheckerExpr(table);
    bool result = node->condition->accept(tce, Type::Bool());
    if (!result)
        errorf("If condition, invalide type bool: %s", node->to_string().c_str());
    result &= node->ifblock->accept(this, type);
    if (node->elseblock.isPresent())
        result &= node->elseblock.get()->accept(this, type);

    delete tce;
    return result;
}

bool TypeChecker::visitWhile(While *node, Type type)
{
    TypeCheckerExpr *tce = new TypeCheckerExpr(table);
    bool result = node->condition->accept(tce, Type::Bool());
    if (!result)
        errorf("While condition, invalide type bool: %s", node->to_string().c_str());
    result &= node->block->accept(this, type);
    delete tce;
    return result;
}

bool TypeChecker::visitAffectation(Affectation *node, Type type)
{
    TypeCheckerExpr *tce = new TypeCheckerExpr(table);
    Type base = table->getType(node->name);
    for (auto ind : node->index)
    {
        base = base.e();
    }
    if (base == Type::Null())
    {
        errorf("Affectation expression, to many index: %s", node->to_string().c_str());
        delete tce;
        return false;
    }
    bool result = node->value->accept(tce, base);
    if (!result)
        errorf("Affectation expression, invalide type to variable: %s", node->to_string().c_str());
    delete tce;
    return result;
}

bool TypeChecker::visitDeclaration(Declaration *node, Type type)
{
    bool result = true;
    for (auto d : node->variables)
    {
        table->add((SymboleTable::Variable){node->type, false}, d.name);
        if (d.value.isPresent())
        {
            TypeCheckerExpr *tce = new TypeCheckerExpr(table);
            result &= d.value.get()->accept(tce, node->type);
            if (!result)
                errorf("Declaration expression, invalide type to variable: %s", node->to_string().c_str());
            delete tce;
        }
    }
    return result;
}

bool TypeChecker::visitFor(For *node, Type type)
{
    TypeCheckerExpr *tce = new TypeCheckerExpr(table);
    bool result = true;
    if (node->initIterator.isPresent())
        result &= node->initIterator.get()->accept(this, Type::Null());
    if (!result)
    {
        errorf("For declaration expression, invalide type to variable: %s", node->to_string().c_str());
        delete tce;
        return result;
    }
    if (node->condition.isPresent())
        result &= node->condition.get()->accept(tce, Type::Bool());
    if (!result)
    {
        errorf("For condition expression, invalide type bool: %s", node->to_string().c_str());
        delete tce;
        return result;
    }
    if (node->afterOperation.isPresent())
        result &= node->afterOperation.get()->accept(this, Type::Null());
    if (!result)
    {
        errorf("For affectation expression, invalide type to variable: %s", node->to_string().c_str());
        delete tce;
        return result;
    }
    result &= node->block->accept(this, type);
    delete tce;
    return result;
}

bool TypeChecker::visitReturn(Return *node, Type type)
{
    TypeCheckerExpr *tce = new TypeCheckerExpr(table);
    bool result = node->value->accept(tce, type);
    delete tce;
    return result;
}

bool TypeChecker::visitCallInstruction(CallInstruction *node, Type type)
{
    TypeCheckerExpr *tce = new TypeCheckerExpr(table);
    Type tf = this->table->getTypef(node->call->name);
    bool result = node->call->accept(tce, tf);
    delete tce;
    return result;
}

bool TypeChecker::visitBlock(Block *node, Type type)
{
    bool result = true;
    for (auto instr : node->instructions)
    {
        result &= instr->accept(this, type);
    }
    return result;
}

TypeCheckerExpr::TypeCheckerExpr(SymboleTable *table)
{
    this->table = table;
}


bool TypeCheckerExpr::visitString(String *node, Type type)
{
    return type == Type::String();
}

bool TypeCheckerExpr::visitInteger(Integer *node, Type type)
{
    return type == Type::Integer();
}

bool TypeCheckerExpr::visitFloat(Float *node, Type type)
{
    return type == Type::Float();
}

bool TypeCheckerExpr::visitBool(Bool *node, Type type)
{
    return type == Type::Bool();
}

bool TypeCheckerExpr::visitChar(Char *node, Type type)
{
    return type == Type::Char();
}

bool TypeCheckerExpr::visitArrayAtom(ArrayAtom *node, Type type)
{
    Type type_ = this->table->getType(node->name);
    bool result = type_ == type;
    if (!result)
        errorf("ArrayAtom expression, invalide type: %s", node->to_string().c_str());
    for (auto exp : node->index)
    {
        result &= exp->accept(this, Type::Integer());
        if (!result)
            errorf("ArrayAtom expression, invalide index: %s", node->to_string().c_str());
    }
    return result;
}

bool TypeCheckerExpr::visitVariable(Variable *node, Type type)
{
    Type type_ = this->table->getType(node->name);
    return type_ == type;
}

bool TypeCheckerExpr::visitUnary(Unary *node, Type type)
{
    Operator unaryop = node->op;
    bool result = true;
    if (unaryop == Operator::Dereference())
    {
        Variable *v = dynamic_cast<Variable *>(node->a);
        ArrayAtom *aa = dynamic_cast<ArrayAtom *>(node->a);
        result = v != nullptr || aa != nullptr;
        if (!result)
            errorf("Unary expression, invalide dereference: %s", node->to_string().c_str());
        if (result)
        {
            Type t;
            if (v != nullptr)
                t = table->getType(v->name);
            else
                t = table->getType(aa->name);
            result &= t.e() == type;
            if (!result)
                errorf("Unary expression, invalide type after dereference: %s", node->to_string().c_str());
        }
    }
    else if (unaryop == Operator::Reference())
    {
        Variable *v = dynamic_cast<Variable *>(node->a);
        ArrayAtom *aa = dynamic_cast<ArrayAtom *>(node->a);
        result = v != nullptr || aa != nullptr;
        if (!result)
            errorf("Unary expression, invalide reference: %s", node->to_string().c_str());
        if (result)
        {
            Type t;
            if (v != nullptr)
                t = table->getType(v->name);
            else
                t = table->getType(aa->name);
            result &= type == Type::Pointer(t);
            if (!result)
                errorf("Unary expression, invalide type after reference: %s", node->to_string().c_str());
        }
    }
    else if (unaryop == Operator::Minus())
    {
        result &= node->a->accept(this, Type::Float());
        result &= node->a->accept(this, Type::Integer());
        result &= (Type::Float() == type || Type::Integer() == type);
        if (!result)
            errorf("Unary expression, invalide minus: %s", node->to_string().c_str());
    }
    else if (unaryop == Operator::Not())
    {
        result &= node->a->accept(this, Type::Bool());
        result &= Type::Bool() == type;
        if (!result)
            errorf("Unary expression, invalide not: %s", node->to_string().c_str());
    }
    return result;
}

bool TypeCheckerExpr::visitBinop(Binop *node, Type type)
{
    bool a = node->a->accept(this, Type::Integer()) || node->a->accept(this, Type::Float());
    bool b = node->b->accept(this, Type::Integer()) || node->b->accept(this, Type::Float());

    bool c = node->a->accept(this, Type::Bool());
    bool d = node->b->accept(this, Type::Bool());

    if (node->op == Operator::Add() || node->op == Operator::Sub() || node->op == Operator::Mul() || node->op == Operator::Div() || node->op == Operator::Mod())
    {
        return a && b && (type == Type::Float() || type == Type::Integer());
    }

    if (node->op == Operator::Eq() || node->op == Operator::Neq() || node->op == Operator::Gt() || node->op == Operator::Ge() || node->op == Operator::Lt() || node->op == Operator::Le())
    {
        return a && b && type == Type::Bool();
    }

    if (node->op == Operator::And() || node->op == Operator::Or() || node->op == Operator::Xor())
    {
        return c && d && type == Type::Bool();
    }

    return false;
}

bool TypeCheckerExpr::visitCall(Call *node, Type type)
{
    Type tf = this->table->getTypef(node->name);
    bool result = tf == type;
    int i = 0;
    std::vector<SymboleTable::Parameter> parameters_f = this->table->getParameters(node->name);
    if (node->parameters.size() != parameters_f.size())
    {
        errorf("Call expression, invalide number of argument: %s", node->to_string().c_str());
        return false;
    }
    for (auto expr : node->parameters)
    {
        result &= expr->accept(this, parameters_f[i].type);
        i++;
    }
    return result;
}

bool TypeCheckerExpr::visitTernary(Ternary *node, Type type)
{
    bool cond = node->cond->accept(this, Type::Bool());
    bool b = node->a->accept(this, type);
    bool c = node->b->accept(this, type);

    return cond && b && c;
}