#include "main.h"
/**
 * print_rev - pt ch
 * @s: chk
 */
void print_rev(char *s)
{
	int ct = 0;
	while (s[ct] != '\0')
	{
		ct++;
	}
	ct = ct - 1;
	while (ct >= 0)
	{
		_putchar(s[ct]);
		ct--;
	}
	_putchar('\n');
}
