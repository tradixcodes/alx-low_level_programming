#include "main.h"
#include <math.h>
/**
 * _pow_recursion - gives us the power of a number
 *
 * @x: parameter for base
 * @y: parameter for exponent
 *
 * Return: power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1 / (x * _pow_recursion(x, -y - 1)));
	}
}
