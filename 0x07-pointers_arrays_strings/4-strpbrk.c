#include "main.h"
/**
 * _strpbrk - searche a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int l = 0, o;

	while (*(s + l))
	{
		for (o = 0; *(accept + o); o++)
			if (accept[o] == *(s + l))
				return (s + l);
		l++;
	}
	return ('\0');
}
