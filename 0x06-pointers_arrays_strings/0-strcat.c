#inlude "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len1 = 0, len2 = 0;

	for (i = 0; 1; i++)
	{
		if (dest[i] == '\0')
			break;
		len1++;
	}
	for (j = 0; 1; j++)
	{
		if (src[j] == '\0')
			break;
		len2++;
	}
	for  (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
