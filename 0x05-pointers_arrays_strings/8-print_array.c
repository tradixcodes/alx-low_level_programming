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
	int a[n];
	int i;

	for (i = 0, i < n; i++)
	{
		if (i == 0)
		{
			_putchar(a[i] + 48);
			_putchar(',');
		}
		else if (i == (n - 1))
		{
			_putchar(a[i] + 48);
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
			_putchar(a[i] + 48);
			_putchar(',');
		}
	}
}
