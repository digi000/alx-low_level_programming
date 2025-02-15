#include "main.h"
/**
 * more_numbers - cft
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 1;
		int c = 0;

		while (c < 2)
		{
		int k = 0;

		while (k < 9)
		{
			if ((c == 1 && k < 5) || c == 0)
			{
			if (c == 1)
			{
				_putchar(j + '0');
			}
			_putchar(k + '0');
			}
			k++;
		}
		c++;
		}
		_putchar('\n');
		i++;
	}
}
