#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: var
 * @n: var
 *
 * Return : string
 */
void reverse_array(int *a, int n)
{
	int l, o, laila;

	for (l = 0; l < n; l++)
	{
		for (o = l + 1; o < n; o++)
		{
			laila = *(a + l);
			*(a + l) = *(a + o);
			*(a + o) = laila;

		}
	}
}
