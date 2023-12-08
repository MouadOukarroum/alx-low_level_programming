#include "lists.h"

/**
 * free_list - frees the memory allocated to a list
 * @head: pointer to the first node in the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *nextNode;

	if (!head)
		return;
	current = head;
	while (current)
	{
		nextNode = current->next;
		free(current->str);
		free(current);
		current = nextNode;
	}
}
