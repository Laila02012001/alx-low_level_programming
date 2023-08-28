#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: pointer to the first node on the list
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (!head)
		return;
	while (*head != NULL)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}
}
