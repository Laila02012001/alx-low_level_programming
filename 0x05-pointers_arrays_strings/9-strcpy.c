#include "main.h"
#include <string.h>
/**
 * *_strcpy - copie the string pointed to by src
 * @dest: array
 * @src: lenght of array
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	char *laila;

	laila = strcpy(dest, src);
	return (laila);
}
