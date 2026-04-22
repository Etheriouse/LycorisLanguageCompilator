
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
        BuilderAsd ba;
        Program *p = ba.build(argv[1]);
        TypeChecker tc;
        std::cout << p->to_string() << std::endl;
        p->pretty_print(0);
        std::cout << "is correct " << tc.check(p) << std::endl;
        delete p;
    }
    return 0;
}
