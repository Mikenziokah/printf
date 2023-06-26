#include "main.h"
/**
* _printf - displays formated outputs on the console
* @format: formated characters
* Return: Always 0
*/
int _printf(const char *format, ...)
{
    int x = 0;
    va_list digits;
    va_start(digits, format);

    if (format == NULL)
    return (-1);
    for (x = 0; format[x]; x++)
    {
        if (format[x] != '%')
        {
            return (format[x]);
        }
        else
        {
            if (!format[x + 1] && format[x + 1] == NULL)
            return (-1);
            switch (format)
            {
                case 'c':
                {
                    int ch = va_arg(digits, char *);
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
                case '%';
                putchar('%');
                x++;
                break;
                {
                    else
                    {
                        putchar(format);
                        x++;
                    }
                    format++;
                }
                va_end(digits);
                return (x);
                    }
                }
                }
                }
            }
        }
    }
}
