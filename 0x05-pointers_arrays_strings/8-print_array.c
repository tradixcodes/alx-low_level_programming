#include "main.h"
#include <stdio.h>
/**
 * print_array - prints characters in the array
 *
 * @a: array parameter
 * @n: number of elemente
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
