#include <stdlib.h>
/**
 * _calloc - ifskj
 * @nmemb: jkj
 * @size: grf
 * Return: uh
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb < 1 || size < 1)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
