#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Description: This function initializes
 * the members of a struct dog with the
 * provided name, age, and owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
