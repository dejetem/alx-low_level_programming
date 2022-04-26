#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: This is the C string to be scanned
 * @accept:character in str_a that matches one of the characters in str_b
 * Return: string s that matches any character specified in accept
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *s != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}
return (0);
}
