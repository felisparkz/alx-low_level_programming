#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: the int for the paramaters of my function
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i == size - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}

