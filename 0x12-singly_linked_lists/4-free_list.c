#include "lists.h"

/**
* free_list - free a list
* @head: head of the linked list
* Return: nothing
*/

void free_list(list_t *head)
{
	list_t *l;

	while ((l = head) != NULL)
	{
		head = head->next;
		free(l->str);
		free(l);
	}
}
