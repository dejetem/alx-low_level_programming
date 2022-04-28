#include "main.h"

/**
 * evaluate_num - recursion loop
 * @n: number
 * @i: number to iterator
 * Return: return 1 or 0
 */

int evaluate_num(int n, int i)
{
if (i == n - 1)
{
return (1);
}

else if (n % i == 0)
{
return (0);
}

if (n % i != 0)
{
return (evaluate_num(n, i + 1));
}

return (0);

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
