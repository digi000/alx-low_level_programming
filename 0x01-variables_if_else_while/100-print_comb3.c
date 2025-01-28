#include <stdio.h>
/**
 * main - 2 digit
 * Return: 0
 */
int main(void)
{
	int zec = 0;
	int ct = 0;
	int ze = 48;
	int wh = 48;
	int jd1;
	int jd2;

	while (ct <= 89)
	{
		if (wh > 57)
		{
			wh = 48;
		}

		if (zec > 9)
		{
			ze++;
			zec = 0;
		}

		jd1 = ze * 10 + wh;
		jd2 = wh * 10 + ze;
		if (ze != wh && ((jd1 != jd2) && (jd1 < jd2)))
		{
			putchar(ze);
			putchar(wh);
			if (ct < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		wh++;
		ct++;
		zec++;
	}
	putchar('\n');
	return (0);
}
