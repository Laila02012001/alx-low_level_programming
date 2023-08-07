#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create an array of chars
 * @size: integer
 * @c: char
 * Return: null if size = 0 or String
 */
char *create_array(unsigned int size, char c)
{
	char *o;
	unsigned int l = 0;

	o = malloc(size);
	if (size == 0 || !o)
		return (0);
	while (l < size)
	{
		o[l] = c;
		l++;
	}
	return (o);
}
