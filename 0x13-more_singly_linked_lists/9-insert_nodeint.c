#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to first node in list
 * @idx: index of the list where the new node should be added
 * @n: data to be added
 *
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l, *m;
	unsigned int o;

	if (head == NULL)
		return (NULL);

	m = malloc(sizeof(listint_t));
	if (m == NULL)
		return (NULL);

	m->n = n;
	l = *head;

	if (idx == 0)
	{
		m->next = l;
		*head = m;
		return (m);
	}

	for (o = 0; o < idx - 1; o++)
	{
		if (l == NULL)
			return (NULL);
		l = l->next;
	}

	m->next = l->next;
	l->next = m;

	return (m);
}
