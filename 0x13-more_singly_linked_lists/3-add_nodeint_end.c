#include "lists.h"


/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: head pointer of the list
 * @n: value of the new node
 * Return: a pointer to the added node at the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
