#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program's arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
