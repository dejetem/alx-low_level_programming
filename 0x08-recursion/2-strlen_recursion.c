#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: pointer block of memory to fill
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{
int t = 0;

if (*s == '\0')
{
return (0);
}
s++;

t = _strlen_recursion(s) + 1;
return (t);
}
