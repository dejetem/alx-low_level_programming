#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string to code
 * Return: the enconde string
 */

char *rot13(char *n)
{
int count = 0, i;
char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(n + count) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(n + count) == alph[i])
{
*(n + count) = rot[i];
break;
}
}
count++;
}
return (n);
}
