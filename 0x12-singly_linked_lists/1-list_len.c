#include "lists.h"

/**
 * list_len - calc length of a linked list
 * @h: head pointer of our list
 * Return: length of our list
 */


size_t list_len(const list_t *h)
{
	size_t length = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		length++;
		ptr = ptr->next;
	}
	return (length);
}
