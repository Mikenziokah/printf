#include "main.h"

/**
 * _printf - prints outputs according to formats
 * @format: specifiers
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int x;
	int count = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL && format == '\0')
		return (-1);
	if (format == '%')
	{
		_putchar('%');
		count++;
	}
	else if (format == 'c')
	{
		c = (char)va_arg(args, int);
		-Putchar(c);
		count++;
	}
	for (x = 0; format && format[x] != '\0'; x++)
	{
		va_end(args);
		return (count);
	}
}
