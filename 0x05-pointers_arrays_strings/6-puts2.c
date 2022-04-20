#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 *
 * @str: array.
 */

void puts2(char *str)
{
int x = 0;
int y;

while (str[x] != 0)
{
x++;
}
for (y = 0; y < x; y++)
{
if (y % 2 == 0)
{
_putchar(str[y]);
}
}
_putchar('\n');
}
