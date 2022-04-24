#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @n: string to code
 * Return: the enconde string
 */

char *leet(char *n)
{
int count = 0, i;
int lower[] = {97, 101, 111, 116, 108};
int upper[] = {65, 69, 79, 84, 76};
int num[] = {52, 51, 48, 55, 49};

while (*(n + count) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(n + count) == lower[i] || *(n + count) == upper[i])
{
*(n + count) = num[i];
break;
}
}
count++;
}
return (n);
}
