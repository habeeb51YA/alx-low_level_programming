#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @a: Pointer to the 2D array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;

		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
