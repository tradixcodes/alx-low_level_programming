#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: parameter for string
 *
 * Return: void
 */
void puts_half(char *str)
{
	if (strlen(str) % 2 != 0)
	{
		int length = ((strlen(str) - 1) / 2);

		for (; str[length] < strlen(str); length++)
		{
			_putchar(str[length]);
		}
		_putchar('\n');
	}
	else
	{
		int length = (strlen(str) / 2);

		for (; str[length] < strlen(str); length++)
		{
			_putchar(str[length]);
		}
		_putchar('\n');
	}
