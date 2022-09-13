#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}

