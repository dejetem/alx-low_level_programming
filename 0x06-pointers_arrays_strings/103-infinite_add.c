#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: num 1
 * @n2: num 2
 * @a: buffer that the function will use to store the result.
 * @b: buffer size
 * Return: Always 0
 */

char *infinite_add(char *n1, char *n2, char *a, int b)
{
int c1 = 0, c2 = 0, op, bg, d1, d2, add = 0;
while (*(n1 + c1) != '\0')
c1++;
while (*(n2 + c2) != '\0')
c2++;
if (c1 >= c2)
bg = c1;
else
bg = c2;
if (b <= bg + 1)
return (0);

a[bg + 1] = '\0';
c1--, c2--, b--;
d1 = *(n1 + c1) - 48, d2 = *(n2 + c2) - 48;
while (bg >= 0)
{
op = d1 + d2 + add;
if (op >= 10)
add = op / 10;
else
add = 0;
if (op > 0)
*(a + bg) = (op % 10) + 48;
else
*(a + bg) = '0';
if (c1 > 0)
c1--, d1 = *(n1 + c1) - 48;
else
d1 = 0;
if (c2 > 0)
c2--, d2 = *(n2 + c2) - 48;
else
d2 = 0;
bg--, b--;
}
if (*(a) == '0')
return (a + 1);
else

return (a);
}
