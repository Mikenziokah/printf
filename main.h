#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef char *(*PrintFunction)(va_list list);

int _printf(const char *format, ...);
char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *print_c(va_list list);
char *print_s(va_list list);
char *print_d(va_list list);
char *itob(va_list list);
char *rot13(va_list list);
char *rev_string(va_list list);
char *itoOctal(va_list list);

/**
 * struct type - structure name
 * @id: format specifier
 * @func: ptr to function
 */
typedef struct type
{
	char id;
	PrintFunction func;
} print;

#endif
