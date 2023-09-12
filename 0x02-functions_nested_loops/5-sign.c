#include "main.h"
/**
 * print_sign - literally prints signs
 *
 * @n: parameter value to check for sign
 *
 * Return: 1(+), 0(zero), -1(-)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
