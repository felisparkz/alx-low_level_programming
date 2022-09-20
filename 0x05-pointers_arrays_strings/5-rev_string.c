#include "main.h"

/**
 * rev_string - function that reverses a string*
 * @s: pointer to string 
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, temp;
	char rev_string[1000];

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;
	
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}