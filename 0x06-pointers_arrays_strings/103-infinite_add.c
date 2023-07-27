#include "main.h"
#include <stdio.h>
/**
 * infinite_add - add two numbers
 * @n1: number
 * @n2: number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: the pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, la, il, ab1, ab2, add = 0;

	while (*(n1 + l1) != '\0')
		l1++;
	while (*(n2 + l2) != '\0')
		l2++;
	if (l1 >= l2)
		il = l1;
	else
		il = l2;
	if (size_r <= il + 1)
		return (0);
	r[il + 1] = '\0';
	l1--, l2--, size_r--;
	ab1 = *(n1 + l1) - 48, ab2 = *(n2 + l2) - 48;
	while (il >= 0)
	{
		la = ab1 + ab2 + add;
		if (la >= 10)
			add = la / 10;
		else
			add = 0;
		if (la > 0)
		*(r + il) = (la % 10) + 48;
		else
			*(r + il) = '0';
		if (l1 > 0)
			l1--, ab1 = *(n1 + l1) - 48;
		else
			ab1 = 0;
		if (l2 > 0)
			l2--, ab2 = *(n2 + l2) - 48;
		else
			ab2 = 0;
		il--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
