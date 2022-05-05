#include "main.h"

/**
 *_strlen - count arrray
 *@s: array of elements
 *Return: i
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 *str_concat - pointer
 *@n1: Array 1
 *@n2: Array 2
 *Return: Always an array dinamic
 */

char *str_concat(char *n1, char *n2)
{
char *k;
unsigned int i, j, size;


if (n1 == NULL)
n1 = "";

if (n2 == NULL)
n2 = "";
size = (_strlen(n1) + _strlen(n2) + 1);

k = (char *) malloc(size * sizeof(char));


if (k == 0)
{
return (NULL);
}

for (i = 0; *(n1 + i) != '\0'; i++)
*(k + i) = *(n1 + i);

for (j = 0; *(n2 + j) != '\0'; j++)
{
*(k + i) = *(n2 + j);
i++;
}

return (k);
}
