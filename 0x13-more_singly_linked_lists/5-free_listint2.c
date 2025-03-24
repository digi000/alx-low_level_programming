#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t* current;
	listint_t* temp;

	current = *head;
	while(current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
