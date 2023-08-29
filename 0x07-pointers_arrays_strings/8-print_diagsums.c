#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int sum_main = 0;
	int sum_secondary = 0;

	int i;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("Sum of main diagonal: %d\n", sum_main);
	printf("Sum of secondary diagonal: %d\n", sum_secondary);
}
