#include "main.h"
/**
* _strstr - locate a substring
* @haystack: string
* @needle: string
* Return: string
*/
char *_strstr(char *haystack, char *needle)
{
	int l = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (*(haystack + l) == *(needle + l))
		{
			while (*(needle + l) == *(haystack + l))
			{
				if (*(needle + (l + 1)) == 0)
				{
					return (haystack);
				}
				l++;
			}
		}
		haystack++;
	}
	return (0);
}
