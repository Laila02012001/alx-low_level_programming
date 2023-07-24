#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: array
 * @n: lenght of array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l == n - 1)
		{
			printf("%d", a[l]);
			break;
		}
		printf("%d, ", a[l]);
	}
	printf("\n");
}
