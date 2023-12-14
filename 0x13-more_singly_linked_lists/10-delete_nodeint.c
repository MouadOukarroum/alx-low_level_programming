#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prevnode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node =  *head;
	while (node)
	{
		if (i == index)
		{
			prevnode->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prevnode = node;
		node = node->next;
	}
	return (-1);
}

