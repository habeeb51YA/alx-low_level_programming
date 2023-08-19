#include "main.h"

/**
 * print_numbers - prinnt numbers 0 - 9
 *
 * Return: Always 0.
 */

void print_numbers()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_numbers();
	return (0);
}
