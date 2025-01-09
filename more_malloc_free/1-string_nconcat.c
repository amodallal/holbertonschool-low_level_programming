#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes from the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 * Return: A pointer to the newly allocated space containing s1 followed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, i;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);  
	if (n >= len2)
	n = len2;
	concat = malloc(len1 + n + 1); 
	if (concat == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	concat[i] = s1[i];
	for (i = 0; i < n; i++)
	concat[len1 + i] = s2[i];
	concat[len1 + n] = '\0';
	return (concat);
}
