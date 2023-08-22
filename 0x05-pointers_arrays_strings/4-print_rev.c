#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_reverse - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 */

void print_rev(char *s)
{
	int length = strlen(s);


	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
