#include "main.h"
/**
 * print_number - Print number
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int laila = 1;

	while (n / laila >= 10)
	{
		laila *= 10;
	}

	while (laila != 0)
	{
		_putchar(n / laila + '0');
		n %= laila;
		laila /= 10;
	}
}
