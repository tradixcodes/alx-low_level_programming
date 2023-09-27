#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - finds square root
 *
 * @n: parameter for number
 *
 * Return: -1(fail), result(success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int x = n / 2;
	int prev = 0;

	while (x != prev)
	{
		prev = x;
		x = (x + n / x) / 2;
	}
	return (x);
}
