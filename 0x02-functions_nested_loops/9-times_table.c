#include "main.h"
/**
 * times_table - printing the new timetable
 *
 * Return: void
 */
void times_table(void)
{
	int i, product;

	for (i = 0; i < 10; i++)
	{
		int j = 0;
/*		*/
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product > 9)
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			else if (product < 10 && product != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(product + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
