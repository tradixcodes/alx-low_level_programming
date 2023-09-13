#include "main.h"
/**
 * print_times_table - prints timetable based on input
 *
 * @n: parameter value for tt size
 * tt - timetable
 *
 * Return: Prints it's stuff
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		int i, product;
/*		*/
		for (i = 0; i < n + 1; i++)
		{
			int j = 0;
/*			*/
			for (j = 0; j < n + 1; j++)
			{
				product = i * j;
				if (j > 0 && j < n)
				{
					_putchar(' ');
					if (product > 99)
					{
						_putchar(' ');
						_putchar(product / 100 + '0');
						_putchar(product % 10 + '0');
						_putchar(product % 10 + '0');
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product / 10 + '0');
						_putchar(product % 10 + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(product + '0');
					}
					_putchar(',');
				}
				else
				{
					if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product / 10 + '0');
						_putchar(product % 10 + '0');
					}
					else if (product > 99)
					{
						_putchar(' ');
						_putchar(product / 100 + '0');
						_putchar(product % 10 + '0');
						_putchar(product % 10 + '0');
					}
					else
					{
						if (j != 0)
						{
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
							_putchar(product + '0');
						}
						else
						{
							_putchar(product + '0');
							_putchar(',');
						}
					}
				}
			}
			_putchar('\n');
		}
	}
}

