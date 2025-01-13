#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: If a member of the struct is NULL, it prints (nil).
 *              If the struct pointer `d` is NULL, it prints nothing.
 */
void print_dog(struct dog *d)

{	if (d)
	{
	/* Print name */
	if (d->name)
	printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");
	/* Print age */
	printf("Age: %f\n", d->age);
	/* Print owner */
	if (d->owner)
	printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
	}
}
