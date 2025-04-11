#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int ct;

	ct = 0;
	current = head;
	while (current)
	{
		if (ct == index)
			return (current);
		current = current->next;
		ct++;
	}
	return (NULL);
}
