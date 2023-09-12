#include "main.h"
/**
 * main - Entry point
 *
 * Description: Using user defined header file
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
