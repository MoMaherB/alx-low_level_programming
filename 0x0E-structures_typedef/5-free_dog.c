#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory occupied by a struct dog instance
 * @d: Pointer to the struct dog to be freed
 *
 * Description: This function releases
 * the memory occupied by the provided
 * struct dog instance, including the
 * dynamically allocated name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
