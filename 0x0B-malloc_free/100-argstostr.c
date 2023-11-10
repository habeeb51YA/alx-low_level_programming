#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string.
 *         NULL if ac == 0 or av == NULL, or if memory allocation fails.
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;
	int i;

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		int length = 0;

		while (arg[length] != '\0')
		{
			length++;
		}

		total_length += length + 1;
	}

	char *result = (char *)malloc(total_length + 1);

	if (result == NULL)
		return (NULL);

	int current_position = 0;
	int I;

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		int length = 0;

		while (arg[length] != '\0')
		{
			result[current_position] = arg[length];
			current_position++;
			length++;
		}

		result[current_position] = '\n';
		current_position++;
	}

	result[current_position] = '\0';
	return (result);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <arguments...>\n", argv[0]);
		return (1);
	}

	char *concatenated = argstostr(argc - 1, argv + 1);

	if (concatenated == NULL)
	{
		printf("Memory allocation failed or no arguments provided.\n");
		return (1);
	}

	printf("Concatenated arguments:\n%s", concatenated);

	free(concatenated);

	return (0);
}
