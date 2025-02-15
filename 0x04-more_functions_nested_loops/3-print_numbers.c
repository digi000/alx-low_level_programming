#include "main.h"
/**
 * print_numbers - 0-9
 */
void print_numbers(void)
{
	int ct = '0';

	while (ct <= '0' + 9)
	{
		_putchar(ct);
		if (ct == '0' + 9)
			_putchar('\n');
		ct++;
	}
}
