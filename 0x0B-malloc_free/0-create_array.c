#include "main.h"

/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}
p = malloc(size * sizeof(char));

if (p == NULL)
{
return (NULL);
}
while (i < size)
{
p[i] = c;
i++;
}
return (p);
}
