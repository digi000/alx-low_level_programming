#include "main.h"
/**
 *  print_alphabet_x10 = 10 a
 *  Return: 1
 */
void print_alphabet_x10(void)
{
	int ct = 0;
	char ap;

	while (ct < 10)
	{
		ap = 'a';
		while (ap <= 'z')
		{
			_putchar(ap);
			ap++;
		}
		ct++;
		_putchar('\n');
	}
}
