#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: 0 if char in string not 0 or 1 and digit otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0, e = 0;

	if (b == NULL)
		return (0);

	while (b[e] != '\0')
	{
		if (b[e] != '0' && b[e] != '1')
			return (0);

		a = a * 2 + (b[e] - '0');
		e++;
	}
	return (a);
}
