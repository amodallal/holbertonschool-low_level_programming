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

int _strlen(char *str)
{
	int length = 0;

	if (str == NULL)
	{
	return 0;
	}
	while (str[length] != '\0')
	{
	length++;
	}
	return length;
}

char *_strdup(char *str)
{
	char *new_str;
	int length, i;
	
	if (str == NULL)
	{
	return NULL;
	}

	length = _strlen(str) + 1;
	new_str = malloc(length);
	if (new_str == NULL)
	{
	return NULL;
	}

	for (i = 0; i < length; i++)
	{
	new_str[i] = str[i];
	}

	return new_str;
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	
	free(new_dog);
	return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
