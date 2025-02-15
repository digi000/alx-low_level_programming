#include "main.h"
/**
 * print_most_numbers - no 2,4
 */
void print_most_numbers(void)
{
	int ct = '0';

	while (ct <= '0' + 9)
	{
		if (ct != '0' + 2 && ct != '0' + 4)
			_putchar(ct);
		if (ct == '0' + 9)
			_putchar('\n');
		ct++;
	}
}
