#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog with name, age, and owner
 * @name: Pointer to the dog's name (char *)
 * @age: The dog's age (float)
 * @owner: Pointer to the dog's owner's name (char *)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
