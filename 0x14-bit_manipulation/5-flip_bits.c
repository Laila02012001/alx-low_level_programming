#include "main.h"
/**
 * flip_bits - flip to another number
 * @n: integer
 * @m: integer
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = n ^ m;
	unsigned int o = 0;

	while (l != 0)
	{
		if (l & 1)
			o++;
		l = l >> 1;
	}
	return (o);
}
