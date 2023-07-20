#include "main.h"
/**
 * print_line - draw a straight line in the terminal.
 * @n: integer
 * Return: Nothing
 */
void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
