#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of
 * integers, followed by a new line
 *
 * @a: pointer
 * @b: array variable value
 */

void print_array(int *a, int b)
{
int i;

for (i = 0; i < b; ++i)
{
if (i == b - 1)
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}
