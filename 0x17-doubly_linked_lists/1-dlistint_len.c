#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t ct;

	ct = 0;
	while (h)
	{
		ct++;
		h = h->next;
	}
	return (ct);
}
