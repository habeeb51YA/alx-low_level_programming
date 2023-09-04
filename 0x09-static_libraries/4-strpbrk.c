#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of bytes to search for.
 *
 * Return: Pointer to the first occurrence in the string s of any of the bytes
 *         in the string accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
