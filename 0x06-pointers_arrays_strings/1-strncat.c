#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates(combines)
 * two strings but has flexibility of determining
 * how many bytes from src will be concatenated
 * @dest: destination string
 * @src: source string
 * @n: byte input
 *
 * Return: concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
