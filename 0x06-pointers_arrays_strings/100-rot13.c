#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */

char *rot13(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if ((*str >= 'a' && *str <= 'z' && *str + 13 > 'z') ||
			(*str >= 'A' && *str <= 'Z' && *str + 13 > 'Z'))
			{
				*str = *str - 13;
			}
			else
			{
				*str = *str + 13;
			}
		}
		str++;
	}

	return (original_str);
}
