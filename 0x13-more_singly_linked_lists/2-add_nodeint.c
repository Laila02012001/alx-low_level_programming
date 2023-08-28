#include "lists.h"

/**
 * add_nodeint - add new node to head of list
 * @head: pointer to head of list
 * @n: data in node
 *
 * Return: pointer to new head of the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (0);

	l->n = n;
	l->next = *head;
	*head = l;

	return (l);
}
