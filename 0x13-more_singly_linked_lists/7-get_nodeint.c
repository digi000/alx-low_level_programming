#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t* current;
	listint_t* temp;

	current = head;
	count = 0;
	while(current)
	{
		if (count == index)
		{
			temp = current;
			return (temp);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
