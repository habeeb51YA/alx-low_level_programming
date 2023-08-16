#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Prints _islower on a new line
 *
 * Return: Always 0.
 */

int _islower(int c)
{
return (islower(c));
}

/**
 * main  - ckeck and prints lower case on a new line
 *
 * Return: Always 0.
 */

int main(void)
{
char testChar = 'a';
if (_islower(testChar))
{
printf("%c is a lowercase character.\n", testChar);
}
else
{
printf("%c is not a lowercase character.\n", testChar);
}

return (0);
}
