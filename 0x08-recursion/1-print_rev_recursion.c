#include "main.h"
#include <string.h>
/**_print_rev_recursion - prints string in reverse
 * using recursion
 * @s: string value parameter
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int n = strlen(s);
	int i;

	if (n == '\0')
	{
	}
	if (i == '\0')
	{
	}
	if (n % 2 == 0)
	{
		for (i = 0; i < (n / 2); i++)
		{
			int temp;

			temp = s[n];
			s[n] = s[i];
			s[i] = temp;
			_print_rev_recursion(s[n - 1]);
			_putchar(s)
		}
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < ((n + 1) / 2)); i++)
		{
			int temp;

			temp = s[n];
			s[n] = s[i];
			s[i] = temp;
			_print_rev_recursion(s[n - 1]);
			_putchar(s);
		}
		_putchar('\n');
	}
}
