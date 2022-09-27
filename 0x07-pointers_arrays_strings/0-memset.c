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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
