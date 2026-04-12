#ifndef symbole_table_h
#define symbole_table_h

#include <vector>
#include <map>
#include <string>
#include "../asd/program.h"

class SymboleTable
{
public:
    typedef struct
    {
        Value *value;
        Type type;
    } Variable;

    SymboleTable();
    void add(Variable v, std::string name);
    void set(Value *v, std::string name);
    Value *getValue(std::string name);
    Type getType(std::string name);

    void enterScop();
    void exitScop();

private:
    std::vector<std::map<std::string, Variable>> scops;
};

#endif