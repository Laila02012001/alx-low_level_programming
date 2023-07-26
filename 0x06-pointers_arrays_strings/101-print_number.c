#include "main.h"
/**
 * print_number - print an integer
 * @n: integer
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int laila = n;

	if (n < 0)
	{
		laila = -laila;
		_putchar('-');
	}
	if (laila > 9)
		print_number(laila / 10);
	_putchar(laila % 10 + '0');
}
