#include "main.h"
/**
* _strspn - get the length of a prefix substring
* @s: string
* @accept: string
* Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c;

	while (*(s + a) != '\0')
	{
		c = 0;
		for (b = 0; *(accept + b); b++)
		{
			if (accept[b] == *(s + a))
			{
				c = 1;
				break;
			}
		}
		if (c == 0)
			break;
		a++;
	}
	return (a);
}
