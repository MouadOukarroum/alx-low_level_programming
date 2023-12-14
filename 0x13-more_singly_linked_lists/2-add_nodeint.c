#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: the head of the list
 * @n: the vlaue of the new node
 * Return: return the pointer to the new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode  = malloc(sizeof(listint_t));

	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
