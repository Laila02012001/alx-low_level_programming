#include "main.h"

/**
* get_endianness -  function that checks the endianness
* Return: 0 or 1
*/
int get_endianness(void)
{
	unsigned int l = 1;
	char *lola = (char *)&l;

	if (*lola)
		return (1);
	return (0);
}
