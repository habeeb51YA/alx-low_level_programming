#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */

char *cap_string(char *str)
{
	bool new_word = true;

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = true;
		}

		else if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			new_word = false;
		}
		else
		{
			new_word = false;
		}
	}

	return (str);
}
