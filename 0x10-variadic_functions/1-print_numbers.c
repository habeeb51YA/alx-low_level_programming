#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers separated by a separator.
 * @separator: The string to be printed between numbers (or NULL).
 * @n: The number of integers passed to the function.
 * @...: The variable number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
