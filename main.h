#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(cons char *format, ...);
char (*get_function(char i))(va_list);


char *print_c(va_list list);
char *print_s(va_list list);

/**
 * struct type - structure name
 * @id: format specifier
 * @func: ptr to function
 */
typedef struct type
{
	char id;
	char* (func)(va_list);
} print;

#endif
