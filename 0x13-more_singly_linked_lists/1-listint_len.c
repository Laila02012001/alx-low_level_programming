#include "lists.h"
/**
 * listint_len - Print All the elements of a list
 * @h: Singly linked list
 * Return: n the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
