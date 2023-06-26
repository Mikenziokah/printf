#include "main.h"

char *_strcpy(char *dest, char *src);
/**
 * print_s - takes string and return string
 * @list: string
 * Return: string
 */
char *print_s(va_list list)
{
	char *s;
	char *p;
	int len;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	len = _strlen(s);

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	return (_strcpy(p, s));
}
/**
 * _strcpy - Copies information from each element
 * @dest: destination file
 * @src: source file
 * Return: array
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = src[x];
	return (dest);
}
