#include "main.h"
/**
 * main - entry point
 *
 * Return: nothing if success 
 */
void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');
}
