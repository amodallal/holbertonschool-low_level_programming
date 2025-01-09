#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each,
 * and sets all bytes to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 * memory, or NULL if allocation fails,
 * or if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	((char *)ptr)[i] = 0;
	return (ptr);
}	
