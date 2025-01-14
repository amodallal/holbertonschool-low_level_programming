#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * 
 * Return: Pointer to the new dog struct or NULL if failure occurs
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}
	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;
	new_dog->name = malloc(name_len);
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	 new_dog->owner = malloc(owner_len);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
	strcpy(new_dog->name, name); 
	strcpy(new_dog->owner, owner);
	new_dog->age = age; 
	return (new_dog);
}

