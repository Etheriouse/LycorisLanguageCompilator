#include <iostream>
#include <parser.h>
#include "asd/program.h"
#include "lib/list.h"
#include "lib/utils.h"
#include "lib/symbole_table.h"

using namespace std;

int main(void)
{
    SymboleTable *table = new SymboleTable();
    Parser *parser = new Parser("tests/instruction/voidprog.ll", "config.llc");
    Instruction *prog = parser->parse();
    
    Program *program = new Program(prog);
    cout << (*program) << endl;
    delete parser;
    delete program;

    printf("Hello world!\n");
    return 0;
}
