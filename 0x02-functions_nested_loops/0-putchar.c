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

	for (int i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
