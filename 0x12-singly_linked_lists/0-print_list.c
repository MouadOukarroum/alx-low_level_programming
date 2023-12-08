#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: the head pointer of the list
 * Return: returns the size of the list: nums of elements
 */

size_t print_list(const list_t *h)
{
	size_t elements;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		elements++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}

	return (elements);
}
