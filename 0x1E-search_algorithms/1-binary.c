#include "search_algos.h"

/**
 * binary_search - performs binary search algorithm
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t n = 0;
int *a = array;

if (!array)
		return (-1);

while (size)
{
for (n = 0, printf("Searching in array: "); n < size; n++)
printf("%d%s", a[n], n + 1 == size ? "\n" : ", ");

n = (size - 1) / 2;
if (a[n] == value)
return ((a - array) + n);
else if (a[n] > value)
size = n;
else
{
a += (n + 1);
size -= (n + 1);
}
}
return (-1);
}
