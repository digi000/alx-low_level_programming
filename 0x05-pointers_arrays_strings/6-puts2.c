#include "main.h"
/**
 * puts2 - li
 * @str: er
 */
void puts2(char *str)
{
	int i, ct = 0;

	while (str[ct] != '\0')
	{
		ct++;
	}
	ct = ct - 1;
	i = 0;
	while (i <= ct)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
