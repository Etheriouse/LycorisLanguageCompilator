
addsub:
    muldiv (+|-) muldiv;

muldiv: 
    addsub (*|/) addsub |
    atoms;

atoms:
    float | integer | string | boolean | ident;
