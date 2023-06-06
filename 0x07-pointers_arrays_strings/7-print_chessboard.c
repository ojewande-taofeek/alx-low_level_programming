#include "main.h"

/**
 * print_chessboard - The function that prints the chessboard
 * @a: The pointer to the board
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
