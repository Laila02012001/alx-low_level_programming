#include "main.h"
/**
 * _isdigit - check for a digit (0 through 9)
 * @c: integer
 * Return: 1 or 0(Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
