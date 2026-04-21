#ifndef symbole_table_h
#define symbole_table_h

#include <vector>
#include <map>
#include <string>
#include "../lycoris_asd.h"

class SymboleTable
{
public:
    typedef struct
    {
        Type type;
        bool immutable;
    } Variable;

    typedef struct {
        std::string name;
        Type type;
    } Parameter;

    typedef struct {
        Type type;
        std::vector<Parameter> parameters;
    } Function;

    SymboleTable();
    void add(Variable v, std::string name);
    Type getType(std::string name);
    bool getMutable(string name);

    void addf(Function f, std::string name);
    void setf(std::vector<Parameter> parameters, std::string name);
    Type getTypef(std::string name);
    std::vector<Parameter> getParameters(std::string name);

    void enterScop();
    void exitScop();

    void pretty_print();

private:
    std::vector<std::map<std::string, Variable>> variable_scops;
    std::vector<std::map<std::string, Function>> function_scops;
};

#endif