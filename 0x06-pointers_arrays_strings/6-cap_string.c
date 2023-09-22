#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes strings
 * i don't see the difference with upper
 * @c: string parameter
 *
 * Return: the capitalized string
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (i == 0 && c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		if (c[i] == ',' || c[i] == ';' || c[i] == '.' || c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
		{
			int next;

			next = i + 1;
			if (c[next] >= 'a' && c[next] <= 'z')
			{
				c[next] -= 32;
			}
			i++;
		}
	}
	printf("\n");
	return (c);
}
