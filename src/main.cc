#include <parser.h>
#include "asd/program.h"
#include "lib/list.h"
#include "lib/utils.h"
#include "lib/symbole_table.h"

using namespace std;

int main(void)
{
    SymboleTable *table = new SymboleTable();
    Parser *parser = new Parser("tests/functions/func.ll", "config.llc");
    Program *program = parser->parse();

    cout << (*program) << endl;
    program->pretty_print(0);
    
    delete program;
    delete parser;
    delete table;
    return 0;
}
