#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int ns;

	if (head == NULL)
		return (0);
	ns = 0;
	current = head;
	while (current)
	{
		ns += current->n;
		current = current->next;
	}
	return (ns);
}
