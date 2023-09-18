#include "main.h"
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
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			printf("%d", a[i]);
			_putchar('\n');
		}
	}
}
