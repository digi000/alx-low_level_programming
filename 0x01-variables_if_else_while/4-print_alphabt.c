#include <stdio.h>
/**
 * main - alpah
 * Return: 0
 */
int main(void)
{
	char lw = 'a';

	while (lw <= 'z')
	{
		if (!((lw == 'e') || (lw == 'q')))
		{
			putchar(lw);
		}
		lw++;
	}
	putchar('\n');
	return (0);
}
