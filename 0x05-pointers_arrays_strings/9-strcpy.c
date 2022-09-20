#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string unto the first argument
 * @dest: this is destiny
 * @src: this is the copia
 *
 * Return: this return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
