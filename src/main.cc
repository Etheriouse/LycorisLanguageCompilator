#include <iostream>
#include <parser.h>
#include "asd/program.h"
#include "lib/list.h"

using namespace std;

int main(void)
{
    Parser *parser = new Parser("main.ll", "config.llc");

    Integer *a = new Integer(3);
    Integer *b = new Integer(5);
    Float *c = new Float(2.5);
    Integer *d = new Integer(10);
    Boolean *e = new Boolean(true);
    Boolean *f = new Boolean(false);

    UnOp *u1 = new UnOp(Operator::Minus, d);

    BinOp *b1 = new BinOp(a, Operator::Add, b);
    BinOp *b2 = new BinOp(b1, Operator::Mul, c);
    BinOp *b3 = new BinOp(b2, Operator::Gt, u1);
    BinOp *b4 = new BinOp(e, Operator::Xor, f);
    UnOp *u2 = new UnOp(Operator::Not, b4);
    BinOp *b5 = new BinOp(b3, Operator::And, u2);

    List<int> list;

    
    list.append(0);
    list.append(0);
    list.append(0);
    list.append(0);
    list.append(0);

    cout << list.length << endl;
    cout << list << endl;

    cout << *b5 << endl;

    delete b5;
    delete parser;
    
    printf("Hello world!\n");
    return 0;
}

