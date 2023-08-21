#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string.
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (int i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
