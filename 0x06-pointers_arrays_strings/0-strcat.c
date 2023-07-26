#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenate two strings
* @dest: string
* @src: string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (a >= 0)
	{
		if (*(dest + a) == '\0')
		{
			while (*(src + b) != '\0')
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
