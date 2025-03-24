#include "lists.h"

size_t print_listint(const listint_t *h)
{
	const listint_t* current;
	size_t count;

	count = 0;
	current = h;
	while(current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
