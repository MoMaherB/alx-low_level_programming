#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing information about a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Description: This structure defines the attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif