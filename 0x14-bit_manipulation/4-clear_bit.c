#include "main.h"

/**
 * clear_bit - that sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;

x = x << index;
if (index > 64)
return (-1);
*n = *n & ~(x);
return (1);
}
