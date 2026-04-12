#include <iostream>
#include <parser.h>
#include "asd/program.h"
#include "lib/list.h"
#include "lib/utils.h"

using namespace std;

int main(void)
{

    // Integer *a = new Integer(3);
    // Integer *b = new Integer(5);
    // Float *c = new Float(2.5);
    // Integer *d = new Integer(10);
    // Boolean *e = new Boolean(true);
    // Boolean *f = new Boolean(false);

    // UnOp *u1 = new UnOp(Operator::Minus, d);

    // BinOp *b1 = new BinOp(a, Operator::Add, b);
    // BinOp *b2 = new BinOp(b1, Operator::Mul, c);
    // BinOp *b3 = new BinOp(b2, Operator::Gt, u1);
    // BinOp *b4 = new BinOp(e, Operator::Xor, f);
    // UnOp *u2 = new UnOp(Operator::Not, b4);
    // BinOp *b5 = new BinOp(b3, Operator::And, u2);

    // List<int> list;

    
    // list.append(0);
    // list.append(0);
    // list.append(0);
    // list.append(0);
    // list.append(0);
    
    // cout << list.length << endl;
    // cout << list << endl;
    
    // cout << *b5 << endl;
    
    // elete b5;

    Parser *parser = new Parser("tests/calculs/calcule.ll", "config.llc");
    Expression *expr = parser->parse();
    if(expr != nullptr) {
        cout << (*expr) << endl;
    }
    List<Instruction*> list;
    List<Instruction*> list2;
    Instruction *ifi = (Instruction *) new If(expr, list, Optional<List<Instruction*>>::of(&list2)); 
    
    List<Instruction*> main;
    main.append(ifi);

    Program *program = new Program(main);
    cout << (*ifi) << endl;

    delete parser;
    delete program;

    printf("Hello world!\n");
    return 0;
}

