#include <stdio.h>
/**
 * main - num sperated
 * Return: 0
 */
int main(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		putchar((char)ch);
		if (ch < 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
