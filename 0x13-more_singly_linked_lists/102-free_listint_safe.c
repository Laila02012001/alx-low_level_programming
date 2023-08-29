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
	int lola;
	listint_t *lol;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		lola = *h - (*h)->next;
		if (lola > 0)
		{
			lol = (*h)->next;
			free(*h);
			*h = lol;
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
