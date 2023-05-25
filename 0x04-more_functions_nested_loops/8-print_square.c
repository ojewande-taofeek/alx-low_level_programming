#include "main.h"

/**
 * print_square - The function prints square followed by a new line
 * @size: The dimension of the square to be printed
 * Return: Nothing
 */

void print_square(int size)
{
	int line, draw;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (line = 0; line < size; line++)
		{
			for (draw = 0; draw < size; draw++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
