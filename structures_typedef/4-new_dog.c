#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - Manually calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
    int length = 0;

    /* Check if the string is NULL, return 0 length if it is */
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
    int i;  /* Declare loop variable outside of the loop */

    /* Allocate memory for the dog struct */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
    {
        return (NULL);  /* Return NULL if memory allocation fails */
    }

    /* Manually calculate the length of the name and owner strings */
    name_len = _strlen(name) + 1;  /* +1 for the null terminator */
    owner_len = _strlen(owner) + 1;  /* +1 for the null terminator */

    /* Allocate memory for the name and owner strings */
    new_dog->name = malloc(name_len);
    if (new_dog->name == NULL)
    {
        free(new_dog);  /* Free the previously allocated memory for the struct */
        return (NULL);  /* Return NULL if memory allocation for name fails */
    }

    new_dog->owner = malloc(owner_len);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);  /* Free the previously allocated memory for name */
        free(new_dog);  /* Free the previously allocated memory for the struct */
        return (NULL);  /* Return NULL if memory allocation for owner fails */
    }

    /* Copy the strings into the newly allocated memory */
    if (name != NULL)
    {
        for (i = 0; i < name_len; i++)  /* Use 'i' for iteration */
        {
            new_dog->name[i] = name[i];
        }
    }
    else
    {
        new_dog->name = NULL;
    }

    if (owner != NULL)
    {
        for (i = 0; i < owner_len; i++)  /* Use 'i' for iteration */
        {
            new_dog->owner[i] = owner[i];
        }
    }
    else
    {
        new_dog->owner = NULL;
    }

    /* Set the age of the dog */
    new_dog->age = age;

    return (new_dog);  /* Return the pointer to the new dog struct */
}
