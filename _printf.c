#include "main.h"

/*
 * _printf - prints formats to the console
 * @format: digits and characters to be printed
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int x = 0;
	va_list digits;

	if (format == NULL)
		return (-1);
	va_start(digits, format);
	if (format == '%')
	{
		format++;
		{
			switch (format)
			{
				case 'c':
					{
						int ch = va_arg(digits, int);

						putchar(ch);
						x++;
						break;
					}
				case 's':
					{
						char *str = va_arg(digits, char *);

						fputs(str, stdout);
						x += strlen(str);
						break;
					}
				case '%':
					{
						putchar('%');
						x++;
						break;
					}
					else
					{
						putchar(format);
						x++;
					}
					format++;
			}
			va_end(digits);
			return (0);
		}
	}
}
