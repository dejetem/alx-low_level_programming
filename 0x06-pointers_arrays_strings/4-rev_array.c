#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int x;
int y;

x = 0;
while (x < n)
{
n--;
y = a[x];
a[x] = a[n];
a[n] = y;
x++;
}
}
