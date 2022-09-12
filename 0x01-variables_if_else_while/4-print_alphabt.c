#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase
 *
 * Return: 0 Always success
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z';c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar(10);
	return (0);
}
