#include "main.h"
/**
 * print_line - print line
 * @n: vl
 */
void print_line(int n)
{
	if (n > 0)
	{
		int t = 0;

		while (t < n)
		{
			_putchar('_');
			t++;
		}
	}
	_putchar('\n');
}
