#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array && cmp)
	{
		for (l = 0; l < size; l++)
		{
			if (cmp(array[l]) != 0)
				return (l);
		}
	}

	return (-1);
}
