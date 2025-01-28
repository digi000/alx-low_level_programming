#include <stdio.h>
/**
 * main - 3 digit
 * Return: 0
 */
int main(void)
{
	int j = 0, k, l;

	while (j < 10)
	{
		k = j + 1;
		while (k < 10)
		{
			l = k + 1;
			while (l < 10)
			{
				putchar(j + '0');
				putchar(k + '0');
				putchar(l + '0');
				if (j != 7 || k != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
				l++;
			}
			k++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
