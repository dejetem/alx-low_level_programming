#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if success
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);
}
