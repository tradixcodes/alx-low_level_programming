#include "main.h"
#include <string.h>
/**
 * _strncpy - copies string from src to dest
 * @dest: desination string
 * @src: source string
 * @n: no of bytes for string
 * read more (add dest[n] with '\0')
 * Return: copied string, dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
