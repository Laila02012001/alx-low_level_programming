#include "main.h"
/**
 * sqrt2 - function for sqrt
 * @l: integer
 * @o: Integer
 * Return: INteger
 */
int sqrt2(int l, int o)
{
	if (l * l == o)
		return (o);
	else if (l == o / 2)
		return (-1);
	else
		return (sqrt2((l + 1), o));
}
/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: Integer
 * Return: Int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt2(0, n));
}
