#include "lists.h"
/**
 * reverse_listint - Reverse a listint linked list.
 * @head: Singly linked list
 * Return: Integer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *l, *before_l = NULL;

	if (!head)
		return (0);
	if (!(*head))
		return (0);
	if (!((*head)->next))
		return (*head);
	while (*head)
	{
		l = (*head)->next;
		(*head)->next = before_l;
		before_l = *head;
		*head = l;
	}
	*head = before_l;
	return (*head);
}
