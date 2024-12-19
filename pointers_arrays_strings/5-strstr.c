#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: return
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	return (haystack);
	while (*haystack != '\0')
	{
	h = haystack;
	n = needle;
	while (*n != '\0' && *h == *n)
	{
	h++;
	n++;
	}
	if (*n == '\0')
	return (haystack);
	haystack++;
	}
	return (NULL);
}
