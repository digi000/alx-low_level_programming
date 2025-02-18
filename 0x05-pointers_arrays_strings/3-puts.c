#include "main.h"
#include <string.h>
/**
 * _puts - prt char
 * @str: ck
 */
void _puts(char *str)
{
	int ct = 0;

	while (ct < (int)strlen(str))
	{
		_putchar(str[ct]);
		ct++;
	}
	_putchar('\n');
}
