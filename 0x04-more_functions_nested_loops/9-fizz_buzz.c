#include "main.h"

/**
 * main - function that checks for uppercase character.
 * or Fizz or Buzz or FizzBuzz
 * Return: 0
 */
int main(void)
{
	int num = 1;

	while (num++ < 100>)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			if (num != 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", num);
			num++;
	}

	return (0);
}

				
