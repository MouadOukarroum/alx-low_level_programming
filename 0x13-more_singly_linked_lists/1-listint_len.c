#include "lists.h"

/**
 * listint_len - calculates the length of a linked list
 * @h: the head of the linked list
 * Return: length of the linked list
 */


size_t listint_len(const listint_t *h)
{
	size_t  i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
