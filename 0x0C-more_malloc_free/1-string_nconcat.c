#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first 
 * @s2: second 
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int size_a = 0, size_b = 0, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[size_a] != '\0')
{
size_a++;
}

while (s2[size_b] != '\0')
{
size_b++;
}

if (n > size_b)
n = size_b;
p = malloc((size_b + n + 1) * sizeof(char));

if (p == NULL)
return (0);

for (i = 0; i < size_a; i++)
{
p[i] = s1[i];
}

for (; i < (size_a + n); i++)
{
p[i] = s2[i - size_a];
}
p[i] = '\0';

return (p);
}