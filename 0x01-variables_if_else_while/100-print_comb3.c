#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return: 0 if success
 */
int main(void)
{
int bar1, bar2;

for (bar1 = 0; bar1 < 9; bar1++)
{
for (bar2 = bar1 + 1; bar2 < 10; bar2++)
{
putchar((bar1 % 10) + '0');
putchar((bar2 % 10) + '0');

if (bar1 == 8 && bar2 == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
