#include "main.h"

/**
 *_strdup - count array
 *@s: array of elements
 *Return: pointer,  NULL if it fails
 */

char *_strdup(char *s)
{
char *copy;
unsigned int i, len;

	i = 0;
	len = 0;

if (s == NULL)
return (NULL);
while (s[len])
len++;
copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);
while ((copy[i] = s[i]) != '\0')
i++;
return (copy);
}
