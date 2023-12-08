#include "lists.h"

/**
 * free_list - frees the memory allocated to a list
 * @head: pointer to the first node in the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nextNode;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
