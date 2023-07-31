#include "main.h"
/**
 * _memcpy - copie memory area
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		*(dest + l) = *(src + l);
		l++;
	}
	return (dest);
}
