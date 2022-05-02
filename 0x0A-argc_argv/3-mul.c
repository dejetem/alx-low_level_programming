#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
