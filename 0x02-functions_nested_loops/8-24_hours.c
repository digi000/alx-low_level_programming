#include "main.h"
/**
 * jack_bauer - hrs and ms
 */
void jack_bauer(void)
{
	int a = 0, b, c, d;

	while (a < 3)
	{
		b = 0;
		while (b < 10)
		{
			if (a == 2 && b > 3)
				break;
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
