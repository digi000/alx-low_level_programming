#include "main.h"
/**
 * print_chessboard - iuyhu
 * @a: kjhi
 */
void print_chessboard(char (*a)[8])
{
	int j, i = 0;

	while (i < (int)sizeof(a))
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
