#include <iostream>
#include <parser.h>
#include "asd/program.h"
#include "lib/list.h"
#include "lib/utils.h"
#include "lib/symbole_table.h"

using namespace std;

int main(void)
{
    int a = 1;
    int b = 1;
    int res = a+b;
    int n = 10;
    while (n>0) {
        res = b + a;
        a = b;
        b = res;   
        n = n - 1;
    }
    printf("\n");

    SymboleTable *table = new SymboleTable();
    Parser *parser = new Parser("tests/instruction/fibo.ll", "config.llc");
    Instruction *prog = parser->parse();
    
    Program *program = new Program(prog);
    cout << (*program) << endl;
    delete parser;
    delete program;

    printf("Hello world!\n");
    return 0;
}
