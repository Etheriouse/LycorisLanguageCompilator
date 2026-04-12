#include "symbole_table.h"

using namespace std;

SymboleTable::SymboleTable() {

}

void SymboleTable::add(Variable v, string name) {
    if(scops.back().find(name) != scops.back().end()) 
        scops.back().insert({name, v});
    else
        printf("SymboleTable::add, Variable with the same name is already store: %s\n", name.c_str());
}

void SymboleTable::set(Value *v, string name) {
    for(auto it = scops.rbegin(); it != scops.rend(); ++it) {
        if((*it).find(name) != (*it).end()) {
            if(!(*it)[name].immutable) {
                (*it)[name] = {v, (*it)[name].type, (*it)[name].immutable};
            } else {
                printf("SymboleTable::set, Immutable Variable cannot be modified: %s\n", name.c_str());        
            }
            return;
        }
    }
    printf("SymboleTable::set, Variable not found: %s\n", name.c_str());
}

Value* SymboleTable::getValue(string name) {
    for(auto it = scops.rbegin(); it != scops.rend(); ++it) {
        if((*it).find(name) != (*it).end()) {
            return (*it)[name].value;
        }
    }
    printf("SymboleTable::getValue, Variable not found: %s\n", name.c_str());
    return nullptr;
}

Type SymboleTable::getType(string name) {
    for(auto it = scops.rbegin(); it != scops.rend(); ++it) {
        if((*it).find(name) != (*it).end()) {
            return (*it)[name].type;
        }
    }
    printf("SymboleTable::getType, Variable not found: %s\n", name.c_str());
    return Type::Null;
}

void SymboleTable::enterScop() {
    map<string, Variable> new_scop;
    scops.push_back(new_scop);
}

void SymboleTable::exitScop() {
    scops.pop_back();
}
