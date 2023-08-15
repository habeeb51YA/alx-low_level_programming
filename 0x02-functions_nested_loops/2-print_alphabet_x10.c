#include <stdio.h>

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int count = 0;

while (count < 10)
{
char currentLetter = 'a';
while (currentLetter <= 'z')
{
putchar(currentLetter);
currentLetter++;
}
putchar('\n');
count++;
}
}

/**
 * printAlphabets - prints alphabets called
 *
 * Return: Always 0.
 */

int printAlphabets(void)
{
print_alphabet_x10();
return (0);
}
