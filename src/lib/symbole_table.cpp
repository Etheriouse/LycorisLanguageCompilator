#include "symbole_table.h"
#include "console.h"
#include <iostream>

using namespace std;

#define tab "   "

SymboleTable::SymboleTable()
{
    map<string, Function> new_scop;
    this->function_scops.push_back(new_scop);
    enterScop();
}

void SymboleTable::add(Variable v, string name)
{
    // logf("name: %s, immutable: %d type: %s", name.c_str(), v.immutable, v.type.to_string().c_str());
    if (variable_scops.back().find(name) == variable_scops.back().end())
    {
        variable_scops.back().insert({name, v});
    }
    else
    {
        errorf("SymboleTable::add, Variable with the same name is already store: %s", name.c_str());
    }
}

Type SymboleTable::getType(string name)
{
    for (auto it = variable_scops.rbegin(); it != variable_scops.rend(); ++it)
    {
        if ((*it).find(name) != (*it).end())
        {
            return (*it)[name].type;
        }
    }
    errorf("SymboleTable::getType, Variable not found: %s", name.c_str());
    return Type::Null();
}

bool SymboleTable::getMutable(string name)
{
    for (auto it = variable_scops.rbegin(); it != variable_scops.rend(); ++it)
    {
        if ((*it).find(name) != (*it).end())
        {
            return (*it)[name].immutable;
        }
    }
    errorf("SymboleTable::getMutable, Variable not found: %s", name.c_str());
    return false;
}

void SymboleTable::addf(Function f, std::string name)
{
    if (function_scops.back().find(name) == function_scops.back().end())
        function_scops.back().insert({name, f});
    else
        errorf("SymboleTable::addf, Function with the same name is already store: %s", name.c_str());
}

void SymboleTable::setf(std::vector<Parameter> parameters, std::string name)
{
    for (auto it = function_scops.rbegin(); it != function_scops.rend(); ++it)
    {
        if ((*it).find(name) != (*it).end())
        {
            (*it)[name] = {(*it)[name].type, parameters};
            return;
        }
    }
    errorf("SymboleTable::setf, Function not found: %s", name.c_str());
}

Type SymboleTable::getTypef(std::string name)
{
    for (auto it = function_scops.rbegin(); it != function_scops.rend(); ++it)
    {
        if ((*it).find(name) != (*it).end())
        {
            return (*it)[name].type;
        }
    }
    printf("SymboleTable::getTypef, Function not found: %s", name.c_str());
    return Type::Null();
}

std::vector<SymboleTable::Parameter> SymboleTable::getParameters(std::string name)
{
    for (auto it = function_scops.rbegin(); it != function_scops.rend(); ++it)
    {
        if ((*it).find(name) != (*it).end())
        {
            return (*it)[name].parameters;
        }
    }
    errorf("SymboleTable::getParameters, Function not found: %s", name.c_str());
    return vector<SymboleTable::Parameter>();
}

void SymboleTable::enterScop()
{
    map<string, Variable> new_scop;
    variable_scops.push_back(new_scop);
}

void SymboleTable::exitScop()
{
    variable_scops.pop_back();
}

void SymboleTable::pretty_print() {
    int nbscop = 1;
    std::cout << "Variables:" << std::endl;
    for(auto map : variable_scops) {
        for(auto entry : map) {
            for(int i = 0;i<nbscop; i++) {
                std::cout << tab;
            }
            std::cout << (entry.second.immutable?"const ":"") << entry.first << ": " << entry.second.type.to_string() << std::endl;  
        }
        nbscop++;
    }
    nbscop = 1;
    std::cout << "Functions:" << std::endl;
    for(auto map : function_scops) {
        for(auto entry : map) {
            for(int i = 0;i<nbscop; i++) {
                std::cout << tab;
            }
            std::cout << entry.second.type.to_string();  
            std::cout << " " << entry.first << "(";
            int i = 0;
            for(auto param : entry.second.parameters) {
                if(i>0) std::cout << ", ";
                std::cout << param.type.to_string() << " " << param.name;
            }
            std::cout << ")" << std::endl;
        }
        nbscop++;
    }
}