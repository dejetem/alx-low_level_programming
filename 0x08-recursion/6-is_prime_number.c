#include "main.h"

/**
 * evaluate_num - recursion loop
 * @n: number
 * @i: number to iterator
 * Return: return 1 or 0
 */

int evaluate_num(int i, int n)
{
if (n == 2)
return (2);
if (n % 2 == 0)
return (0);
if ((n % i == 0) && (n != i))
return (0);
if ((n % i == 0) && (n == i))
return (1);
return (evaluate_num(i + 1, n));
}

/**
 * is_prime_number - Return if the input is a prime number
 * @n: number
 * Return:  1 or 0 
 */

int is_prime_number(int n)
{
int i;

i = 2;

if (n < 2)
{
return (0);
}

if (n == 2)
{
return (1);
}

return (evaluate_num(n, i));
}
