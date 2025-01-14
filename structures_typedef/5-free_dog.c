#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function frees the memory allocated for the name,
 *              owner, and the dog structure itself. It checks if the
 *              pointers are not NULL before freeing the memory.
 *              If the dog structure is NULL, nothing is done.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
	{
	free(d->name);
	}
	if (d->owner != NULL)
	{
	free(d->owner);
	}
	free(d);
	}
}
