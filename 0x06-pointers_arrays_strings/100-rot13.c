#include "main.h"
/**
 * rot13 - encode a string using rot13
 * @a: string
 * Return: string
 */
char *rot13(char *a)
{
	int l, o;
	char tab1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tab2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0; *(a + l); l++)
	{
		for (o = 0; tab1[o] != 0; o++)
		{
			if (*(a + l) == tab1[o])
			{
				*(a + l) = tab2[o];
				break;
			}
		}
	}
	return (a);
}
