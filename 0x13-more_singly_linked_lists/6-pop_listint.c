#include "lists.h"
/**
 * pop_listint - Delete a node at the beginning of a listint_t
 * @head: Singly linked list
 * Return: Integer
 */
int pop_listint(listint_t **head)
{
	listint_t *l;
	int o;

	if (!(*head))
		return (0);
	l = (*head)->next;
	o = (*head)->n;
	free(*head);
	*head = l;
	return (o);
}
