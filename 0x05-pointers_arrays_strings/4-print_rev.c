#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: this is the input string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; _str[index] != '\0'; index++)

	for (index = index - 1; _str[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

