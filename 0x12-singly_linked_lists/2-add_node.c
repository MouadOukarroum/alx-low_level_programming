#include "lists.h"

/**
 * add_node - adds a node at the beginning of linked list
 * @head: head pointer of the list
 * @str: data of the node
 * Return: a pointer ot the node added
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;


	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
