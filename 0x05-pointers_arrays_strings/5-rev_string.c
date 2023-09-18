#include "main.h"
#include <string.h>
/**
 * rev_string - prints in reverse
 *
 * @str: parameter for a string
 *
 * Return: void
 */
void rev_string(char *str)
{
	int len = strlen(str);
	int start = 0;
	int end = strlen(str) - 1;

	while (start < end)
	{
		char temp;

		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
