#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap interger
 * @a: variable a
 * @b: variable b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
