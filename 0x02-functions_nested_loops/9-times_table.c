#include "main.h"
/**
 * times_table - 9x9 ma
 */
void times_table(void)
{
	int a = 0, b, ab;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			ab = a * b;
			if (ab > 9)
			{
				_putchar(ab / 10 + '0');
				_putchar(ab % 10 + '0');
			}
			else
			{
				_putchar(ab + '0');
			}
			if (b < 9)
			{
				if (a * (b + 1) < 10)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			b++;
		}
		_putchar('\n');
		a++;
	}

}
