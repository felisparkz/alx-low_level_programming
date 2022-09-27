#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: source string
 * @b: the contant byte for filling
 * @n: length of buffer
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
