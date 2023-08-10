#include <stdlib.h>
/**
 * _calloc - concatenate two strings
 * @size: integer
 * @nmemb: integer
 * Return: nothings
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *l;
	unsigned int o;

	if (size == 0 || nmemb == 0)
		return (0);
	l = malloc(nmemb * size);
	if (!l)
		return (0);
	for (o = 0; o < (nmemb * size); o++)
		*(l + o) = 0;
	return (l);
}
