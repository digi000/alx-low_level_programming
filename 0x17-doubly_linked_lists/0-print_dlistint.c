#include "lists.h"
#include <stdio.h>
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t ct;

	current = h;
	ct = 0;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		ct++;
	}
	return ct;
}
