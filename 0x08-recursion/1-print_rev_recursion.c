#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - print a string in reverse
* @s : String.
* Return : nothing
*/

void _print_rev_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *(s + 0));
}
