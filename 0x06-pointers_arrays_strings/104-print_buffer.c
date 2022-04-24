#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if i is a printable ASCII char
 * @i: integer
 * Return: 1 if true, else 0
 */

int isPrintableASCII(int i)
{
return (i >= 32 && i <= 126);
}


/**
 * printHexes - print hex values for string s in formatted form
 * @s: string to print
 * @start: starting point
 * @end: ending point
 */

void printHexes(char *s, int start, int end)
{
int i = 0;

while (i < 10)
{
if (i < end)
printf("%02x", *(s + start + i));
else
printf("  ");
if (i % 2)
printf(" ");
i++;
}
}


/**
 * printASCII - print ascii values for string s
 * formatted to replace nonprintable chars with '.'
 * @s: string to print
 * @start: starting point
 * @end: ending point
 */

void printASCII(char *s, int start, int end)
{
int a, i = 0;

while (i < end)
{
a = *(s + i + start);
if (!isPrintableASCII(a))
a = 46;
printf("%c", a);
i++;
}
}


/**
 * print_buffer - prints a buffer
 * @s: string
 * @n: size of buffer
 */

void print_buffer(char *s, int n)
{
int start, end;

if (n > 0)
{
for (start = 0; start < n; start += 10)
{
end = (n - start < 10) ? n - start : 10;
printf("%08x: ", start);
printHexes(s, start, end);
printASCII(s, start, end);
printf("\n");
}
}
else
printf("\n");
}
