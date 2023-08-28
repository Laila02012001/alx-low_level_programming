#include "lists.h"
/**
 * get_nodeint_at_index - The nth node of a listint
 * @head: Singly linked list
 * @index: iteger
 * Return: Singly Linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l = head, *m;
	unsigned int o;

	if (head == NULL)
		return (NULL);

	for (o = 0; o < index; o++)
	{
		if (l->next == NULL)
			return (NULL);
		m = l->next;
		l = m;
	}
	return (l);
}
