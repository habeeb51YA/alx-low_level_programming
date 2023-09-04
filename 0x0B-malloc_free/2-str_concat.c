#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = (s1 != NULL) ? strlen(s1) : 0;
	int len2 = (s2 != NULL) ? strlen(s2) : 0;
	int total_len = len1 + len2 + 1;

	concatenated = (char *)malloc(total_len * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(concatenated, s1);
	if (s2 != NULL)
		strcat(concatenated, s2);

	return (concatenated);
}
