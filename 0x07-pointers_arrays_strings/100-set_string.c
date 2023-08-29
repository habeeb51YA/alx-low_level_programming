#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to the new value to be assigned.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
