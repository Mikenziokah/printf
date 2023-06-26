#include <stddef.h>
#include "main.h"
/**
 * get_function - compares format specifier and gets function
 * @i: format specifier
 * Return: returns the right function
 */
char (*get_function(char i))(va_list)
{
        int n;

        print keys[] = {
                {'c', print_c},
                {'s', print_s},
                {"\0", NULL}
        };

        n = 0;

        while (keys[n].id != "\0")
        {
                if (keys[n].id == i)
                {
                        return (keys[n].func(valist));
                }
                n++
        }
        return (NULL);
}
