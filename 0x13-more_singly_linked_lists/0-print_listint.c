#include "lists.h"
/**
 * print_listint - Print All the elements of a list
 * @h: Singly linked list
 * Return: n the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
