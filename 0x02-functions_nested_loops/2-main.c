#include "main.h"
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
	return;
}

