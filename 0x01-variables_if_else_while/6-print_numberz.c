#include <stdio.h>
/**
 * main - num with putchar
 * Return: 0
 */
int main(void)
{
	int ct = 0;

	while (ct < 10)
	{
		putchar((char)ct + '0');
		ct++;
	}
	putchar('\n');
	return (0);
}
