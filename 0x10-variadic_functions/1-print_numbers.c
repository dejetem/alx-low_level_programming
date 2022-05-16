#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
int number;

va_start(valist, n);
i = 0;
while (i < n)
{
number = va_arg(valist, int);
printf("%d", number);
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(valist);
}
