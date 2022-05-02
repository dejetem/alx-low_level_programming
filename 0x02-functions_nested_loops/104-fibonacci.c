#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: nothing if success
 */
int main(void)
{
int a;
unsigned long b, c, d;
unsigned long e, f, g, h;

a = 0;
b = 0;
c = 1;
for (a = 1; a <= 91; a++)
{
d = b + c;
b = c;
c = d;
printf("%lu, ", d);
}

