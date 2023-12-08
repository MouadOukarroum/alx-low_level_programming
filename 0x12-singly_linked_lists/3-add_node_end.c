#include "lists.h"

/**
 * add_node_end - add a node at the end of a list
 * @head: head of the list
 * @str: data of the new node
 * Return: a pointer to the list
 */


list_t *add_node_end(list_t **head, char *str)
{
	list_t *lastNode = NULL;
	list_t *ptr;

	lastNode = malloc(sizeof(list_t));
	if (lastNode == NULL)
		return (NULL);
	lastNode->str = strdup(str);
	lastNode->len = strlen(str);
	lastNode->next = NULL;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = lastNode;

	return (lastNode);
}
