#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: using sizeof to print the size of various types
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %lu bytes(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
