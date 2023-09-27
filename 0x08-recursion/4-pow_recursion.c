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
	else
	{
		int result = pow(x, y);

		return (result);
	}
}
