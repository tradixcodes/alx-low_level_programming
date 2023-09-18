#include "main.h"
#include <string.h>
/**
 * rev_string - prints in reverse
 *
 * @s: parameter for a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	while (start < end)
	{
		char temp;

		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
