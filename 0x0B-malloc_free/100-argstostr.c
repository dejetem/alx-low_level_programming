#include "main.h"

/**
 * argstostr - prints args
 * @w: takes in width of grid
 * @h: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int w, char **h)
{
char *s;
int count = 0, a = 0, b = 0, c = 0;

if (w == 0 || h == NULL)
return (NULL);
while (a < w)
{
b = 0;
while (h[a][b] != '\0')
{
count++;
b++;
}
a++;
}
count = count + w + 1;
s = malloc(sizeof(char) * count);
if (s == NULL)
{
return (NULL);
}
for (a = 0; a < w; a++)
{
for (b = 0; h[a][b] != '\0'; b++)
{
s[c] = h[a][b];
c++;
}
s[c] = '\n';
c++;
}
return (s);
}