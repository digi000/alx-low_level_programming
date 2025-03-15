#include <stdlib.h>
/**
 * malloc_checked -  hjkj
 * @b: iu
 * Return: fds
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
