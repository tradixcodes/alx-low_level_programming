#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - no brainer
 * but used modulus to do so
 *
 * @n: parameter value to get last digit
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = -n % 10;
	}
	else
	{
		lastdigit = n % 10;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
