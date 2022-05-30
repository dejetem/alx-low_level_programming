#include "main.h"

/**
 * set_bit - that sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;

x = x << index;
if (index > 64)
return (-1);
*n = *n | x;
return (1);
}
