#include <stdio.h>
/**
 * main _ entry point
 *
 * Return: nothing if success
 */
int main(void)
{
unsigned long a, b, c, d;

b = 0;
c = 1;
for (a = 0; a < 50; a++)
{
d = b + c;
b = c;
c = d;
printf("%lu", d);
if (a == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
