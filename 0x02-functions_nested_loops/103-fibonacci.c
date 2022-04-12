#include <stdio.h>
/**
 * main - sum of even fibonacci number not exceed 4000000
 *
 * Return: nothing if success
 */
int main(void)
{
unsigned long a, b, c, d, e;

b = e = 0;
c = 1;
for (a = 0; a < 50; a++)
{
d = b + c;
b = c;
c = d;
if (d % 2 == 0 && d < 4000000)
{
e += d;
}
}
printf("%lu\n", e);
return (0);
}
