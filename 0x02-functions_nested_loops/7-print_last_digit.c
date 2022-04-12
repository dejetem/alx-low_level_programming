#include "main.h"
/**
 * print_last_digit - last digit
 * @i: The int to print
 * Return: Always 0
 */
int print_last_digit(int i)
{
int last_digit;
if (i < 0)
{
last_digit = (-1 * (i % 10));
_putchar (last_digit + '0');
return (last_digit);
}
else
{
last_digit = (i % 10);
_putchar (last_digit + '0');
return (last_digit);
}
}
