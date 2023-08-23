#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int result = 0;

	int sign = 1;

	int digit;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
			{
			digit = *s - '0';

			if (sign == 1 && (result > (2147483647 - digit) / 10))
			{
				return (2147483647);
			}
			else if (sign == -1 && (result < (-2147483648 + digit) / 10))
			{
				return (-2147483648);
			}
			result = result * 10 + (sign * digit);
		}
		else if (result != 0)
		{
			break;
		}

		s++;
	}

	return (result);
}
