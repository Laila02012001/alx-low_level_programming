#include "lists.h"
/**
 * find_listint_loop - finds a loop in a linked list
 * @head: linked list
 * Return: address of node or  NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l, *laila;

	if (head == NULL)
		return (NULL);
	for (laila = head->next; laila != NULL; laila = laila->next)
	{
		if (laila == laila->next)
			return (laila);
		for (l = head; l != laila; l = l->next)
			if (l == laila->next)
				return (laila->next);
	}

	return (NULL);
}
