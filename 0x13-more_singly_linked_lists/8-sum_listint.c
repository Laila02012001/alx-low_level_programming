#include "lists.h"
/**
* sum_listint- Sum of the nth node of a listint
* @head: Singly linked list
* Return: laila
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *l;

	if (!head)
		return (0);
	l = head;
	while (l)
	{
		sum += l->n;
		l = l->next;
	}
	return (sum);
}
