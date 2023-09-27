#include "main.h"
/**
 * is_prime_number - returns a prime number
 *
 * @n: parameter value
 * Return: 0(fail) number (success)
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		if ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0) && (n % 11 != 0))
		{
			if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11)
			{
				return (n);
			}
			return (n);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
