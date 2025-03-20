/**
 * int_index - sdhj
 * @array: few
 * @size: sd
 * @cmp: ed
 * Return: sd
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) > 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
