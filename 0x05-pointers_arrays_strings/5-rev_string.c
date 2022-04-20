#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: character
 */

void rev_string(char *s)
{
char n;
int i, x, y;

x = 0;
y = 0;

while (s[x] != '\0')
{
x++;
}
y = x - 1;

for (i = 0; i < x / 2; i++)
{
n = s[i];
s[i] = s[y];
s[y--] = n;
}
}
