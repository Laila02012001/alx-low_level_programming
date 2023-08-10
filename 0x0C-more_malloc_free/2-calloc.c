#include <stdlib.h>
/**
 * _calloc - concatenate two strings
 * @size: integer
 * @nmemb: integer
 * Return: nothings
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *o;
	unsigned int l = 0;

	if (nmemb == 0 || size == 0)
		return (0);
	o = malloc(nmemb * size);
	if (l == 0)
		return (0);
	while (l < nmemb * size)
	{
		*(l + o) = 0;
		o++;
	}
	return (o);
}
