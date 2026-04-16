#ifndef preprocessor_h
#define preprocessor_h

#include <string>

class Preprocessor {

public:
    Preprocessor(const char* filename);
    std::string process();

private:
    void replace_define(std::string *file);
    void include(std::string *file);
    std::string file;

};

#endif