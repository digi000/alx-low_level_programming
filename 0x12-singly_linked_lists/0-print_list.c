#include <stdio.h>
#include "lists.h"
size_t count;
const list_t* current;

size_t print_list(const list_t *h)
{
	count = 0;
	current = h; 
	while(current)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		count++;
		current = current->next;
	}
	return (count);
}
