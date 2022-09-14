#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: (0) if successful
 */
void print_alphabet(void)
{
	char a = 'alphabet';

	while (a <= 'z')
	{
		_putchar (a);
		a++;
	}

	_putchar ('\n');
}

