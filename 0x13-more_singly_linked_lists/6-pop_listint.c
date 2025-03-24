#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t* h;
	listint_t* current;
	int rt;

	if (*head == NULL)
		return (0);
	rt = (*head)->n;
	current = *head;
	h = current->next;
	*head = h;
	free(current);
	return (rt);
}
