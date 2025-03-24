#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t* newnode;
	listint_t* current;

	current = *head;	
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while(current->next)
	{
		current = current->next;
	}
	current->next = newnode;
	return (newnode);
}
