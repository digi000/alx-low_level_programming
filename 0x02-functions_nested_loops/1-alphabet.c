#include "main.h"
/**
 * print_alphabet - print a-z
 * Return: 1
 */
void print_alphabet(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		_putchar(ap);
		ap++;
	}
	_putchar('\n');
}
