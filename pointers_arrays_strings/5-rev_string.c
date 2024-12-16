#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * rev_string - print string
 *
 * @s: variable
 *
 * Return: return the printed
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
	len++;
	for (i = 0; i < len / 2; i++)
	{
	temp = s[i];
	s[i] = s[len - 1 - i];
	s[len - 1 - i] = temp;
	}
}
