#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @a: string
 * Return: string
 */
char *string_toupper(char *a)
{
	int l;

	for (l = 0; *(a + l); l++)
		if (*(a + l) > 96 && *(a + l) < 123)
			*(a + l) = *(a + l) - 32;
	return (a);
}
