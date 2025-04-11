#include "lists.h"
#include <stdlib.h>
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	while (current != NULL)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head != NULL)
	{
		new->prev = current;
		current->next = new;
	}
	if (*head == NULL)
		*head = new;
	return (*head);
}
