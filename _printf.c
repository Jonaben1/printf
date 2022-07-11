#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>

int _printf (const char *format, ...)
{
        va_list args;
        int done;

        va_start (args, format);
        done = vfprintf(stdout, format, args);
        va_end(args);
        return done;
}
