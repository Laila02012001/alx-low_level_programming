#include "lists.h"
/**
* add_node - add a new node at the beginning of a list_t list
* @head: head of the linked list
* @str: string to store in the list
* Return: address of the head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *laila;
	size_t l = 0;

	laila = malloc(sizeof(list_t));
	if (laila == 0)
		return (0);

	laila->str = strdup(str);

	while (str[l])
		l++;

	laila->len = l;
	laila->next = *head;
	*head = laila;

	return (*head);
}
