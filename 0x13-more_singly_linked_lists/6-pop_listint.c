#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t* current;
	listint_t* temp;
	int rt;

	current = *head;
	if ((*head)->n)
		rt = (*head)->n;
	else
		rt = 0;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	return (rt);
}
