#include <stdio.h>
/**
 * jack_bauer - hrs and ms
 */
void jack_bauer(void)
{
	int hrs = 0, mns;

	while (hrs < 24)
	{
		mns = 0;
		while (mns < 60)
		{
			if (hrs < 10)
			{
				if (mns < 10)
					printf("0%d:0%d\n", hrs, mns);
				else
					printf("0%d:%d\n", hrs, mns);
			}
			else
			{
				if (mns < 10)
					printf("%d:0%d\n", hrs, mns);
				else
					printf("%d:%d\n", hrs, mns);
			}
			mns++;
		}
		hrs++;
	}
}
