#include <stdio.h>
/**
 * main - 4 digit
 * Return: 0
 */
int main(void)
{
	int h = 0, j, k, l;

	while (h < 10)
	{
		j = 0;
		while (j < 9)
		{
			k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{
					if (k == 0 && k == l)
						++l;
					putchar(h + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (h != 9 || j != 8 || k != 9 || l != 9)
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
		h++;
	}
	putchar('\n');
	return (0);
}
