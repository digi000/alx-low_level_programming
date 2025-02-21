#include "main.h"
/**
 * puts_half - hj
 * @str: df
 */
void puts_half(char *str)
{
	int ct = 0;

	while (str[ct] != '\0')
	{
		ct++;
	}
	if (ct % 2 == 0)
		ct = ct / 2;
	else
		ct = (ct - 1) / 2;
	while (str[ct] != '\0')
	{
		_putchar(str[ct]);
		ct++;
	}
	_putchar('\n');
}
