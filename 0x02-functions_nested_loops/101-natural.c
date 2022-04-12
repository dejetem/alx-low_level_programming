#include "main.h"
/**
 * main - entry point
 *
 * Return: nothing if success
 */
int main(void)
{
int a, b = 0;

for (a = 0; a < 1024; a++)
{
if ((a % 3) == 0 || (a % 5) == 0)
b += a;
}
printf("%d\n", b);

return (0);
}
