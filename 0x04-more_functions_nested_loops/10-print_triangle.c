#include "main.h"
/**
 * print_triangle - gh
 * @size: ssf
 */
void print_triangle(int size)
{
	int i = 0;
	int fp = 0;
	int j = size;
	int m = 0;
	int l = 0;

	if (size > 0)
	{
	while (i < size)
	{
		j--;
		fp++;
		m = 0;

		while (m < j && j != 0)
		{
			_putchar(' ');
			m++;
		}
		l = 0;

		while (l < fp)
		{
			_putchar('#');
			l++;
		}
		_putchar('\n');
		i++;
	}
	}
	else
		_putchar('\n');
}
