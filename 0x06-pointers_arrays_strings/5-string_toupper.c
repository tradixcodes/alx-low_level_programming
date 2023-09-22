#include "main.h"
char *string_toupper(char *c)
{
	int i;
	
	for (i = 0; i != '\0'; i++)
	{
		if (c >= 65 && c <= 90)
		{
			char upper;

			upper = ((c - 65) + 97);
			_putchar(upper);
		}
	_putchar('\n');
	}
}
