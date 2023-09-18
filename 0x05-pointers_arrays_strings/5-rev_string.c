#include "main.h"
#include <string.h>
/**
 * rev_string - prints in reverse
 *
 * @s: parameter for a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
