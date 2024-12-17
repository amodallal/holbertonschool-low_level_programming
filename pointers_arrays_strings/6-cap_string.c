#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
	int j;

	for (j = 0; separators[j] != '\0'; j++)
	{
	if (str[i] == separators[j])
	{
	capitalize = 1;
	break;
	}
	}
	if (capitalize == 1 && str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	capitalize = 0;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
	capitalize = 0;
	}
	i++;
	}
	return (str);
}

