#include "search_algos.h"

/**
 * linear_search - performs linear search algorithm
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t n = 0;

if (!array)
return (-1);
while (n < size)
{
printf("Value checked array[%lu] = [%d]\n", n, array[n]);
if (array[n] == value)
return (n);
n++;
}
return (-1);
}
