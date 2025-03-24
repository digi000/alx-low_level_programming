#include "lists.h"
int sum_listint(listint_t *head)
{
	listint_t* current;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while(current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
