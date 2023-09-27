#include "main.h"
/**
 * factorial - finds factorial of a number
 *
 * @n: parameter for factorial number needed
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
