#include <parser.h>
#include "asd/program.h"
#include "lib/list.h"
#include "lib/utils.h"
#include "lib/symbole_table.h"

using namespace std;

int main(int argc, char const *argv[])
{
    if (argc > 2)
    {
        // 0 = executable name
        std::string config = argv[1];
        std::string filename = argv[2];

        SymboleTable *table = new SymboleTable();
        Parser *parser = new Parser(filename.c_str(), config.c_str());
        Program *program = parser->parse();

        cout << (*program) << endl;
        program->pretty_print(0);

        delete program;
        delete parser;
        delete table;
    }
    return 0;
}
