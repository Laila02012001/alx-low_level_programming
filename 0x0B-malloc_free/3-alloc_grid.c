#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: Integer
 * @height: Integer
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int l, a, **i;

	if (width <= 0 || height <= 0)
		return (0);
	i = (int **) malloc(sizeof(int *) * height);
	if (i == 0)
	{
		free(i);
		return (0);
	}
	for (l = 0; l < height; l++)
	{
		*(i + l) = (int *) malloc(sizeof(int) * width);
		if (*(i + l) == 0)
		{
			for (a = 0; a < l; l++)
			{
				free(*(i + l));
			}
			free(i);
			return (0);
		}
		for (a = 0; a < width; a++)
		{
			*(*(i + l) + a) = 0;
		}
	}
	return (i);
}
