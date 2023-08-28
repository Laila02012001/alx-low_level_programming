#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at given position of a listint
 * @head: Singly linked list
 * @index: index of node that should be deleted
 * Return: Singly Linked list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int o = 0;
	listint_t *laila, *l = *head;

	if (!l)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(l);
		return (1);
	}
	while (o < index - 1)
	{
		if (!(l->next))
			return (-1);
		l = l->next;
		o++;
	}
	laila = l->next;
	l->next = laila->next;
	free(laila);
	return (1);
}
