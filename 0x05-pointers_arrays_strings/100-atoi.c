#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * _atoi - ASCII to Integer
 * strtol is better than atoi in a way
 * @s: parameter for a string
 * Return: the ASCII value of the string
 */
int _atoi(char *s)
{
	int num;

	if (*s == '-')
	{
		/*Negative number*/
		num = atoi(s + 1);
		num = -num;
	}
	else if (*s == '+')
	{
		/*Positive number*/
		num = atoi(s + 1);
	}
	else if (isdigit(*s))
	{
		/*No sign, assume positive*/
		num = atoi(s);
	}
	else
	{
		/*Invalid input*/
		return (0);
	}
	return (num);
}
