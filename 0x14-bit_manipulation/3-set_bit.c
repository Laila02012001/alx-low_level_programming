#include "main.h"
/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: integer
 * @index: iNteger
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l = 1;

	if (index > 64)
		return (-1);

	l = l << index;
	*n = *n | l;

	return (1);
}
