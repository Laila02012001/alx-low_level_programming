#include "main.h"
/**
 * print_most_numbers - print the numbers, from 0 to 9, followed by a new line.
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
		if (!(l == '2' || l == '4'))
			_putchar(l);
	_putchar('\n');
}
