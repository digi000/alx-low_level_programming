#include <stdlib.h>
/**
 * create_array - jhhj
 * @size: kh
 * @c: jh
 * Return: uyyu
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *bn;
	if (size == 0)
		return (NULL);

	bn = malloc(sizeof(*bn) * size);
	if (bn == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		bn[i] = c;
		i++;
	}
	return (bn);
}
