#include "main.h"
/**
 * print_sign - print num sign
 * Return: 1 or 0
 * @n: to be ckde
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);
}
