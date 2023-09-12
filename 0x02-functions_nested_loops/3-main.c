#include "main.h"
/**
 * main - checks my code
 *
 * Description - should tell if any
 * ASCII character is upper or lower
 *
 * Return: Always zero (success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
