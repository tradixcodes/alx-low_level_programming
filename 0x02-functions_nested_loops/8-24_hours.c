#include "main.h"
/**
 * jack_bauer - prints time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int mins, hours;

	for (hours = 0; hours < 24; hours++)
	{
		mins = 0;
	/*	*/
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
		}
	}
}
