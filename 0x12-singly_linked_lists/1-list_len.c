#include "lists.h"

/**
 * list_len - print elements of a list
 * @h: pointer
 *
 * Return: size of elements
 */

size_t list_len(const list_t *h)
{
	int l = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
