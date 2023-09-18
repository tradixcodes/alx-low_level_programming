#include "main.h"
/**
 * puts2 - prints string under certain criteria
 * for instance here it only prints even array indices
 * @str: parameter that allows both char and char[]
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] = '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
