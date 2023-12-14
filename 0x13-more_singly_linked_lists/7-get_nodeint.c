#include "lists.h"

/**
 * get_nodeint_at_index - return node at index
 * @head: head of the list
 * @index: index of node to get
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, const int index)
{
	listint_t *node;
	int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
