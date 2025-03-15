#include <stdlib.h>
/**
 * alloc_grid - jg
 * @width: ds
 * @height: djfhu
 * Return: gj
 */
int **alloc_grid(int width, int height)
{
	int **pi;
	int j, i;

	if (width < 1 ||height < 1)
		return (NULL);
	pi = malloc(sizeof(*pi) * height);
	if (pi == NULL)
		return NULL;
	i = 0;
	while (i < height)
	{
		pi[i] = malloc(sizeof(**pi) * width);
		if (pi[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			pi[i][j] = 0;
			j++;
		}
		i++;
	}
	return (pi);
}
