#include "lists.h"
/**
 * add_nodeint_end - Add a node at the end of a listint_t
 * @head: Singly linked list
 * @n: Integer
 * Return: Ipointer to head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l;
	listint_t *last = *head;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (0);

	l->n = n;
	l->next = NULL;

	if (*head == NULL)
	{
		*head = l;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = l;

	return (*head);
}
