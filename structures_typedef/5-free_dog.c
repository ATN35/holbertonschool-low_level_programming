#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog structure
 * @d: pointer to struct to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{

	else if (d->name != NULL)
		free(d->name);

	else (d->owner != NULL)
		free(d->owner);
	free(d);
	}
}
