#include "main.h"
/**
 * clear_bit - set value of a bit to 0 at a given index
 * @n: pointer
 * @index: index of bit to be set
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 62)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
