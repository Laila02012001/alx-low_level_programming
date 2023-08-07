#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - return a pointer to a newly allocated space in memory
* @str: string
* Return: pointer
*/

char *_strdup(char *str)
{
	int laila, l;
	char *o;

	if (str == 0)
		return ('\0');
	for (laila = 1; *(str + laila) != 0; laila++)
		;
	o = malloc(laila + 1);
	if (o == 0)
		return ('\0');
	for (l = 0; l < laila; l++)
		o[l] = str[l];
	return (o);
}
