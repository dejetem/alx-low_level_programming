#include <stdio.h>
/**
 * main - entrt point
 * Return: 0 if success
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
printF("Size of float: %d byte(s)\n", sizeof(float));
return (0);
}
