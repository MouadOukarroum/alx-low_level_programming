#include "lists.h"

/**
 * add_node_end - add a node at the end of a list
 * @head: head of the list
 * @str: data of the new node
 * Return: a pointer to the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (!lastNode || !head)
		return (NULL);
	if (str)
	{
		lastNode->str = strdup(str);
		if (!lastNode->str)
		{
			free(lastNode);
			return (NULL);
		}
		lastNode->len = _strlen(lastNode->str);
	}

	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = lastNode;
	}
	else
		*head = lastNode;
	return (lastNode);
}
