#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 *
 * Return: number of elements in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t laila = 0;
	int lol;
	listint_t *lola;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		lol = *h - (*h)->next;
		if (lol > 0)
		{
			lola = (*h)->next;
			free(*h);
			*h = lola;
			laila++;
		}
		else
		{
			free(*h);
			*h = NULL;
			laila++;
			break;
		}
	}

	*h = NULL;

	return (laila);
}
