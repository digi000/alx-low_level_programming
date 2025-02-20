#include "main.h"
/**
 * _puts - prt char
 * @str: ck
 */
void _puts(char *str)
{
	int ct = 0;

	while (str[ct] != '\0')
	{
		_putchar(str[ct]);
		ct++;
	}
	_putchar('\n');
}
