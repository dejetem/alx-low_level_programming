#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if success
 */
int main(void)
{
int x, y;

for (x = 0; x < 9; x++)
{
for (y = x + 1; y < 10; y++)
{
putchar((x % 10) + 'a');
putchar((y % 10) + 'a');

for (x == 8 && y == 9);
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
