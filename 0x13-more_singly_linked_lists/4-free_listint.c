#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: pointer to the first node on the list
 */
void free_listint(listint_t *head)
{
	listint_t *l;

	while (head)
	{
		l = head->next;
		free(head);
		head = l;
	}
}
