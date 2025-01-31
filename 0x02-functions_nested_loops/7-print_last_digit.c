#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: 0
 * @n: chkd
 */
int print_last_digit(int n)
{

	int po = n % 10;

	if (po < 0)
		po = -po;
	_putchar(po + '0');
	return (po);
}
