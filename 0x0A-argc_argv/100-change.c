#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program's arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents = atoi(argv[1]);
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}
