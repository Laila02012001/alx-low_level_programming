#include "lists.h"

/**
 * add_node_end - add node to end of linked list
 * @head: pointer to a pointer to the head node.
 * @str: pointer to the string
 *
 * Return: pointer to the new head of list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lola, *lol;
	int l;
	char *laila;

	lola = malloc(sizeof(list_t));
	if (lola == NULL)
		return (NULL);

	laila = strdup(str);
	if (laila == NULL)
	{
		free(lola);
		return (NULL);
	}

	l = 0;
	while (str[l])
	{
		l++;
	}

	lola->len = l;
	lola->str = laila;
	lola->next = NULL;

	if (*head == NULL)
	{
		*head = lola;
	}
	else
	{
		lol = *head;
		while (lol->next != NULL)
			lol = lol->next;
		lol->next = lola;
	}

	return (*head);
}
