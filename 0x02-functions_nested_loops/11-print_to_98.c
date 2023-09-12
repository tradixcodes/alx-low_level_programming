#include "main.h"
/**
 * print_to_98 - no brainer, prints values
 *
 * @n: parameter value
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		int digit = 98;

		_putchar(digit + '0');
	}
	_putchar('\n');
}
