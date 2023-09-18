#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: parameter value for address
 * @b: same as above
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
