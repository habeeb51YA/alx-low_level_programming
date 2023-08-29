#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the characters to be considered.
 *
 * Return: Number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int accept_len = 0;

	while (accept[accept_len] != '\0')
	{
		accept_len++;
	}

	while (*s != '\0')
	{
		int found = 0;

		unsigned int i;

		for (i = 0; i < accept_len; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
