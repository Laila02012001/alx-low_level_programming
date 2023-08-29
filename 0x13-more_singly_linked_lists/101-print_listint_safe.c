#include "lists.h"

/**
 * print_listint_safe - Print All the elements of a list
 * @head: Singly linked list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t laila = 0;

	if (!head)
		exit(98);

	for (; head != NULL; laila++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (laila);
}
