#include "main.h"

/**
 * isSpace - determines if character is a space or not
 * @c: input char
 * Return: 1 if true, else 0
 */
int isSpace(char c)
{
return (c == ' ');
}

/**
 * endIndex - returns last index of non-space char
 * @s: input string
 * @i: starting index
 * Return: index of last index of non-space char
 */

int endIndex(char *s, int i)
{
while (!isSpace(*(s + i)))
i++;
return (i);
}

/**
 * countWords - counts numbers of word
 * @n: input string
 * Return: number of words
 */

int countWords(char *n)
{
int wordOn = 0;
int wordOff = 0;

while (*n)
{
if (isSpace(*n) && wordOn)
wordOn = 0;
else if (!isSpace(*n) && !wordOn)
{
wordOn = 1;
wordOff++;
}
n++;
}
return (wordOff);
}


/**
 * startIndex - returns first index of non-space char
 * @s: input string
 * @i: starting index
 * Return: index of first non-space char
 */

int startIndex(char *s, int i)
{
while (isSpace(*(s + i)))
i++;
return (i);
}

/**
 * strtow - splits a string into words
 * @s: string of words to be split
 * Return: double pointer to strings
 */
char **strtow(char *s)
{
char **p;
int i, k, len, start, end, j = 0;
int words = countWords(s);

if (!s || !countWords(s))
return (NULL);
p = malloc(sizeof(char *) * (words + 1));
if (!p)
return (NULL);
for (i = 0; i < words; i++)
{
start = startIndex(s, j);
end = endIndex(s, start);
len = end - start;
p[i] = malloc(sizeof(char) * (len + 1));
if (!p[i])
{
i -= 1;
while (i >= 0)
{
free(p[i]);
i--;
}
free(p);
return (NULL);
}
for (k = 0; k < len; ++k)
p[i][k] = s[start++];
p[i][k++] = '\0';
j = end + 1;
}
p[i] = NULL;
return (p);
}




