#include "main.h"
#include <unistd.h>
/**
 * _strlen - print string
 *
 * @s: variable
 *
 * Return: return the printed
 */
int _strlen(char *s)
{
int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}
	return (length);
}
