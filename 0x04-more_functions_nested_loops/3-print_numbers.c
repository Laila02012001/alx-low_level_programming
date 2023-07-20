#include "main.h"
/**
 * print_numbers - print the numbers, from 0 to 9, followed by a new line
 * Return: Nothing
 */
void print_numbers(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
		_putchar(l);
	_putchar('\n');
}
