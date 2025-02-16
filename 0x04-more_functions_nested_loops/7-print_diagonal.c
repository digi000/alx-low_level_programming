#include "main.h"
/**
 * print_diagonal - pd
 * @n: vl
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int t = 0;

		while (t < n)
		{
			if (t >= 1)
			{
				int m = 0;

				while (m < t)
				{
					_putchar(' ');
					m++;
				}
			}
			_putchar('\\');
			_putchar('\n');
			t++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
