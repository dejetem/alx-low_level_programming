#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @m: interger
 * @n: interger
 * Return: evaluate sqrt
 */

int _evaluate(int m, int n)
{
if (n == 0 || n == 1)
return (n);

else if (m * m < n)
return (_evaluate(m + 1, n));
else if (m * m == n) 
return (m);

return (-1);
return (-1);
}


/**
 * _sqrt_recursion - evaluate sqrt
 * @n: interger
 * Return: Sgrt_recursion
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_evaluate(0, n));
}
