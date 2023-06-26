#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(cons char *format, ...);
char (*get_function(char i))(va_list);

#endif
