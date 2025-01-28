#include <stdio.h>
/**
 * main - hexd
 * Return: 0
 */
int main(void)
{
	char fg = '0';
	char le = 'a';

	while (fg <= '9')
	{
		putchar(fg);
		fg++;
	}
	while (le <= 'f')
	{
		putchar(le);
		le++;
	}
	putchar('\n');
	return (0);
}
