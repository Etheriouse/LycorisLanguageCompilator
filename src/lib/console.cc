#include "console.h"
#include <cstdarg>
#include <cstdio>

using namespace std;

void log(string str)
{
    printf("LOG: %s\n", str.c_str());
}

void logf(const char *fmt, ...)
{
    printf("LOG: ");

    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args); // utilise les "..."
    va_end(args);
    printf("\n");
}

void error(string str)
{
    printf("ERROR: %s\n", str.c_str());
}

void errorf(const char *fmt, ...)
{
    printf("ERROR: ");

    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args); // utilise les "..."
    va_end(args);
    printf("\n");
}