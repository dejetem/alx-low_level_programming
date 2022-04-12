#include "main.h"
#include <stdio.h>
/**
 * _abs - absolute value of an integer
 * @r: The int to print
 * Return: Always 0
 */
int _abs(int r)
{
if (r < 0)
{
return (r * (-1));
}
else if (r == 0)
{
return (0);
}
else
{
return (r);
}
}
