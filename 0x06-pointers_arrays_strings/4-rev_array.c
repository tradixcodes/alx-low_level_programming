#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that prints arrays
 * inversely
 * @a: array parameter
 * @n: no of items in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		if (i != 0)
		{
			printf("%d", a[i]);/*	*/
			printf(", ");
		}
		else/* */
		{
			printf(" ");
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
