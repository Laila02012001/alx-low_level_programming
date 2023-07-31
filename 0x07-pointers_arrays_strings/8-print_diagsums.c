#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: integer
 * @size: integer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int l, sum1 = 0, sum2 = 0;

	for (l = 0; l < size; l++)
	{
		sum1 += a[l];
		a += size;
	}
	a -= size;
	for (l = 0; l < size; l++)
	{
		sum2 += a[l];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
