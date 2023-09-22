#include "main.h"

char *string_toupper(char *c)
{
    int i = 0;

    while (c[i] != '\0')
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 32; // Convert to uppercase
        }
        i++;
    }

    return c;
}

