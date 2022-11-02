#include "search_algos.h"

/**
 * _advanced_binary - performs advanced binary search algorithm
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int *_advanced_binary(int *array, size_t size, int value)
{
size_t n = 0;

if (!size || !array)
return (NULL);
for (printf("Searching in array: "); n < size; n++)
printf("%d%s", array[n], n + 1 == size ? "\n" : ", ");

n = (size - 1) / 2;
if (array[n] == value)
{
if (n)
return (_advanced_binary(array, n + 1, value));
return (array + n);
}
else if (array[n] > value)
return (_advanced_binary(array, n + 1, value));
else
return (_advanced_binary(array + n + 1, size - n - 1, value));
}

/**
 * advanced_binary - performs advanced binary search algorithm
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
int *i = _advanced_binary(array, size, value);

if (!i)
return (-1);
else
return (i - array);
}
