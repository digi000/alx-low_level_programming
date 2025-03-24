#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t* current;
	int rt;

	current = *head;
	if ((*head)->n)
		rt = (*head)->n;
	else
		return (0);
	free(current);
	return (rt);
}
