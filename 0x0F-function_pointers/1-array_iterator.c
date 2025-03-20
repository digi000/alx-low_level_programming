#include<stddef.h>
/**
 * array_iterator - kj
 * @array: jh
 * @size: sds
 * @action: dre
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	if (array && action)
	{
	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
	}
}
