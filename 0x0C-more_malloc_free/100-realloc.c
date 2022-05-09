#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old: old size
 * @new: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old, unsigned int new)
{
char *clone, *relloc;
unsigned int i;

if (ptr != NULL)
clone = ptr;
else
{ 
return (malloc(new));
}
if (new == old)

return (ptr);

if (new == 0 && ptr != NULL)
{ 
free(ptr);

return (0);
}
relloc = malloc(new);
if (relloc == NULL)

return (0);

for (i = 0; i < (old || i < new); i++)
{
*(relloc + i) = clone[i];
}
free(ptr);

return (relloc);
}
