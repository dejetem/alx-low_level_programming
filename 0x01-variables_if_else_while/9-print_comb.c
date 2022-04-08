#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if success
 */
int main(void)
{
int i = 0;

while (i < 10)
{
putchar(48 + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
