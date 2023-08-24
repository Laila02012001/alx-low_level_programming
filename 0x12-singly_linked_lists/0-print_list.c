#include "lists.h"
/**
* print_list - print all the elements of a list_t list
* @h: singly linked list
* Return: number of nudes
*/

size_t print_list(const list_t *h)
{
	int l = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		l++;
		h = h->next;
	}
	return (l);
}
