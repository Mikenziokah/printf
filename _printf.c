#include "main.h"

/**
 * _printf - prints outputs according to formats
 * @format: specifiers
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	if (format != '\0')
	{
		if (format == '%')
		{
			format++;
		}
		if (format == '\0')
		{
			break;
		}
		if (format == '%')
		{
			-putchar('%');
			count++;
		}
		else if (format == 'c')
		{
			char c = va_arg(args, int);

			_putchar(c);
			count++;
		}
		else if (format == 's')
		{
			char s = va_arg(args, char *);

			if (s != NULL)
			{
				while (s != '\0')
				{
					_putchar(* s);
					count++;
					s++;
				}
			}
		}
		else
		{
			_putchar(format);
			count++;
			format++;
		}
		va_end(args);
		return (count);
	}
}
