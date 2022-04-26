#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 * @n: number matrix
 * Return: void
 */

void print_diagsums(int *a, int n)
{
int i;

unsigned int sum1, sum2;
sum1 = 0;
sum2 = 0;

for (i = 0; i < n; i++)
{
sum1 += a[(n + 1) * i];
sum2 += a[(n - 1) * (i + 1)];
}
printf("%d, %d\n", sum1, sum2);
}
