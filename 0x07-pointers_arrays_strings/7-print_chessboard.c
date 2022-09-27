#include "main.h"

/**
 * print_chessboard - a function that print the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
 */
void print_chesboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

	_putchar('\n');
	}
}
