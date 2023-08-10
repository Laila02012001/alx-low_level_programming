#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @new_size: integer
 * @old_size: integer
 * @ptr: void pointer
 * Return: return pointer or 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *l;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (old_size == new_size)
		return (ptr);

	l = malloc(new_size);

	if (l == 0)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (l);

}
