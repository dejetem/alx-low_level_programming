#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory
 * @d: pointer
 * Description: Free memory for struct
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
else
return;
}
