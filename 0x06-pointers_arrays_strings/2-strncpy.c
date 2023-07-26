#include "main.h"
/**
* _strncpy - copie a string
* @dest: string
* @src: string
* @n: intiger
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0, laila = 0;

	while (*(src + laila) != '\0')
		laila++;
	while (l < n)
	{
		if (l >= laila)
			*(dest + l) = '\0';
		else
			*(dest + l) = *(src + l);
		l++;
	}
	return (dest);
}

