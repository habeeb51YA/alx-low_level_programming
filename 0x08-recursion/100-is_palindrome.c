#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int _strlen_recursion(char *s);
int check_palindrome(char *start, char *end);

int is_palindrome(char *s)
{
	if (!*s)
		return (1);

	return (check_palindrome(s, s + _strlen_recursion(s) - 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @start: The start of the string.
 * @end: The end of the string.
 *
 * Return: (1);
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	return (check_palindrome(start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
