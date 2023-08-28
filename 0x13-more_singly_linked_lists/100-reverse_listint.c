#include "lists.h"

/**
* reverse_listint - Reverse a listint linked list
* @head: Singly linked list
* Return: Pointer
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *kadim, *laila = NULL, *next_node;

	if (!head || !(*head) || !((*head)->next))
		return (*head);

	kadim = *head;

	while (kadim)
	{
		next_node = kadim->next;
		kadim->next = laila;
		laila = kadim;
		kadim = next_node;
	}

	*head = laila;

	return (*head);
}
