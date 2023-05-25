#include "main.h"

/**
 * print_triangle - The function prints a triangle followed by a new line
 * @size: The height of the triangle
 * Return: Nothing
 */

void print_triangle(int size)
{
	int space, shape, space_control, shape_control, line;

	space_control = size - 1;
	shape_control = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < size; line++)
		{
			for (space = 0; space < space_control; space++)
				_putchar(' ');
			space_control--;
			for (shape = 0; shape < shape_control; shape++)
				_putchar('#');
			shape_control++;
			_putchar('\n');
		}
	}
}
