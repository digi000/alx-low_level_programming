#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (new->next != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
