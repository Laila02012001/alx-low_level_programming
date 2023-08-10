#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: Integer
 * Return: Nothings
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
