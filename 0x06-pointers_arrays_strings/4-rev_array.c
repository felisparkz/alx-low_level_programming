#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: number of element of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tm;

	for (i = 0; i < n; i++)
	{
		n--;
		tm = a[i];
		a[i] = a[n];
		a[n] = tm;
	}
}
