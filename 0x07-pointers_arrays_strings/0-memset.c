#include "main.h"
/**
* _memset - fill memory with a constant byte
* @s: string
* @b: string
* @n: integer
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		*(s + l) = b;
	return (s);
}
