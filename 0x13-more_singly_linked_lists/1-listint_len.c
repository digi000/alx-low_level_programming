#include "lists.h"
size_t listint_len(const listint_t *h)
{
	const listint_t* current;
	size_t count;

	count = 0;
	current = h;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
