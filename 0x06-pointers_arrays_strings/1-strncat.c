#include "main.h"
#include <stdio.h>
/**
* _strncat - concatenate two strings
* @dest: string
* @src: string
* @n: number of charactres.
* Return: String.
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (a >= 0)
	{
		if (*(dest + a) == '\0')
		{
			while (b < n && *(src + b) != '\0')
			{
				*(dest + a) = *(src + b);
				a++;
				b++;
			}
			break;
		}
		a++;
	}
	return (dest);
}
