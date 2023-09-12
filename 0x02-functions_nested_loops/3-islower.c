#include <ctype.h>
#include "main.h"
/**
 * _islower(int c) - checks for a lowercase character
 *
 * @c: parameter to pass ASCII values
 *
 * Return: 1 if lowercase(true) and 0 if upper(false)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
