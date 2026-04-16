#ifndef preprocessor_h
#define preprocessor_h

#include <string>

class Preprocessor {

public:
    Preprocessor(const char* filename);
    std::string process();

private:
    std::string file;

};

#endif