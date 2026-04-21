
#include "lib/utils.h"
#include "lib/symbole_table.h"
#include <iostream>
#include <vector>
#include "lib/console.h"

#include <antlr4-runtime.h>

#include "lycoris_asd.h"
#include "asd/build.h"
#include "visitor/type_checker.h"

using namespace std;

int main(int argc, char const *argv[])
{
    if (argc > 1)
    {
        SymboleTable *table = new SymboleTable();
        BuilderAsd ba;
        Program *p = ba.build(argv[1]);
        TypeChecker *tc = new TypeChecker(table);
        std::cout << p->to_string() << std::endl;
        p->pretty_print(0);
        tc->check(p);
        table->pretty_print();
        delete table;
    }
    return 0;
}
