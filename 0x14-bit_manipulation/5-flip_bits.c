#include "main.h"

/**
 * flip_bits- returns the num of bits you would need to flip
 * to get from one num to another.
 * @n: number one
 * @m: number two
 * Return: number of bits you would need to flip to get from one number to
 * another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = 0;
unsigned long int bits = 0;

while (i < 64)
{
if ((((m ^ n) >> i) & 1) == 1)
bits = bits + 1;
i++;
}
return (bits);
}
