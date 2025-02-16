#include "main.h"
/**
 * print_square - ps
 * @size: num
 */
void print_square(int size)
{
	int n = 0;

	if (size > 0)
	{
	while (n < size)
	{
		int k = 0;

		while (k < size)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		n++;
	}
	}
	else
		_putchar('\n');
}
