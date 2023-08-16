#include <stdio.h>
#include "main.h"

/**
 * main - check if char is lowercase
 * c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 **/

int main(void)
{
	char ch = 'a';
		if (_islower(ch))
			printf("%c is a lowercase character.\n", ch);
		else
			printf("%c is not a lowercase character.\n", ch);
	return (0);
}

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


