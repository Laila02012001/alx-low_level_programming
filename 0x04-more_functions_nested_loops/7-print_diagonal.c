#include "main.h"
/**
 * print_diagonal - draw a diagonal line on the terminal.
 * @n: integer
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
