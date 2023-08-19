#include "main.h"

/**
 * print_numbers_except_2_and_4 - prints the numbers, from 0 to 9
 * Return: Always 0.
 */

void print_numbers_except_2_and_4(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
