#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - concatenate two strings
* @width: number
* @height: number
* Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **l;
	int w, h;

	if (width <= 0 || height <= 0)
		return (0);
	l = (int **) malloc(sizeof(int *) * height);
	if (l == 0)
	{
		free(l);
		return (0);
	}
	for (w = 0; w < height; w++)
	{
		*(l + w) = malloc(sizeof(int) * width);
		if (*(l + w) == 0)
		{
			for (h = 0; h < w; h++)
				free(*(l + h));
			free(l);
			return (0);
		}
		for (h = 0; h < width; h++)
			*(*(l + w) + h) = 0;
	}
	return (l);
}
