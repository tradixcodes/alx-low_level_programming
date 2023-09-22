#include "main.h"
/**
 * string_toupper - converts strings to uppercase
 *
 * @c: string parameter
 *
 * Return: the converted uppercase array
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
