#include "main.h"
/**
 * print_square - print a square, followed by a new line.
 * @size: integer
 * Return: Nothing
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
