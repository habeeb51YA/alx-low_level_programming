#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value
 * @n: Pointer to an integer whose value needs to be updated
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main  - takes a pointer to an int as parameter and updates the value
 *
 * Return: Always 0.
 */

int main(void)
{
	int number = 5;

	printf("Before update: %d\n", number);

	reset_to_98(&number);

	printf("After update: %d\n", number);

	return (0);
}
