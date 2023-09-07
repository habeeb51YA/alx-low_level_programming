#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string is a positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a positive number, 0 otherwise.
 */

int is_positive_number(char *str)
{
	if (*str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program's arguments.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
