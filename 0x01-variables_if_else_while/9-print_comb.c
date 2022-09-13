#include <stdio.h>

/**
 * main - a program that prints all possible
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
		if (num == '9')
			break;
		putchar (',');
		putchar (' ');
	}
	putchar (10);
	return (0);
}

