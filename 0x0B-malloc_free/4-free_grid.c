#include <stdlib.h>
/**
 * free_grid - jsdh
 * @grid: fdjh
 * @height: dd
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
