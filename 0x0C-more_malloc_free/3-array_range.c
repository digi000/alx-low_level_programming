#include <stdlib.h>
/**
 * array_range - mn
 * @min: fes
 * @max: fh
 * Return: ius
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof *ptr * (max - min)+1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
