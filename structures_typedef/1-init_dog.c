#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the dog's owner's name
 *
 * Description: If the pointer `d` is NULL, the function does nothing.
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