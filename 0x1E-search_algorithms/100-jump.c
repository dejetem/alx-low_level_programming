#include "search_algos.h"

/**
 * jump_search - performs jump search algorithm
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
size_t n = 0, x = sqrt(size);

if (!array)
return (-1);

while (n < size && array[n] < value)
{
printf("Value checked array[%lu] = [%d]\n", n, array[n]);
n += x;
}

x = n - x;
printf("Value found between indexes [%lu] and [%lu]\n", x, n);
n = n >= size ? size - 1 : n;
while (x <= n)
{
printf("Value checked array[%lu] = [%d]\n", x, array[x]);
if (array[x] == value)
return (x);
x++;
}
return (-1);
}
