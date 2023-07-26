#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 *
 * Return: return string
 */
char *cap_string(char *str)
{
	int l = 0, o;
	char sow[] = " \t\n,;.!?\"(){}";

	if (*(str + l) >= 97 && *(str + l) <= 122)
		*(str + l) = *(str + l) - 32;
	l++;
	while (*(str + l) != '\0')
	{
		for (o = 0; o < 13; o++)
		{
			if (*(str + l) == *(sow + o))
			{
				if (*(str + l + 1) >= 97 && *(str + l + 1) <= 122)
					*(str + l + 1) = *(str + l + 1) - 32;
			}
		}
		l++;
	}
	return (str);
}
