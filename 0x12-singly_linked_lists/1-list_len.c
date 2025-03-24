#include "lists.h"
size_t count;
const list_t* current;

size_t list_len(const list_t *h)
{
	count = 0;
	current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return count;
}
