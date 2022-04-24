#include "main.h"

/**
 * _strcmp -  function that compares two strings
 * @s1: A pointer to a character that will be changed
 * @s2: A pointer to a character that will also be changed/modified/updated
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
char *str_x = s1;
char *str_y = s2;


while (*str_x != '\0' && *str_y != '\0' && *str_x == *str_y)
{
str_x++;
str_y++;
}
return (*str_x - *str_y);
}
