
#ifndef console_h
#define console_h

#include <string>
void log(std::string str);
void logf(const char *fmt, ...);
void error(std::string str);
void errorf(const char *fmt, ...);

#endif