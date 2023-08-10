#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - create an array of integers
* @min: int
* @max: int
* Return: return pointer or 0
*/
int *array_range(int min, int max)
{
	int *laila;
	int l, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	laila = malloc(sizeof(int) * size);

	if (laila == NULL)
		return (NULL);

	for (l = 0; min <= max; l++)
		laila[l] = min++;

	return (laila);
}
