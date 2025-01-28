#include <stdio.h>
/**
 * main - print z-a
 * Return: 0
 */
int main(void)
{
	char ap = 'z';

	while (ap >= 'a')
	{
		putchar(ap);
		ap--;
	}
	putchar('\n');
	return (0);
}
