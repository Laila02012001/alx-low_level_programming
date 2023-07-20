#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: integer
 * Return: Nothing
 */
void print_triangle(int size)
{
	int a, b, c;

	c = size - 1;
	if (size > 0)
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b < c; b++)
				_putchar(' ');
			for (b = c; b < size; b++)
				_putchar('#');
			c--;
			_putchar('\n');
		}
	else
		_putchar('\n');
}
