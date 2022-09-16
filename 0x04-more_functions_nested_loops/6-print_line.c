#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
		while (n-- > 0)
		{
			_putchar('_');
		}
		_putchar('\n');
}

