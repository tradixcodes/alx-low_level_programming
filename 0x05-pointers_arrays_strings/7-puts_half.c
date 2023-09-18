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
	int len = strlen(str);
	/*complete length of the string*/

	if (len % 2 != 0)
	{
		int length = ((len - 1) / 2);

		for (; length + 1 < len; length++)
		{
			_putchar(str[length]);
		}
		_putchar('\n');
	}
	else
	{
		int length = (len / 2);

		for (; length < len; length++)
		{
			_putchar(str[length]);
		}
		_putchar('\n');
	}
}
