#include <stdio.h>
/**
 * *cap_string - hh
 * @vb: df
 * Return: wer
 */
char *cap_string(char *vb)
{
	int ct = 0;

	while (vb[ct] != '\0')
	{
		if (((vb[ct] > 122) || (vb[ct] < 97)) && ((vb[ct] < 65) || (vb[ct] > 90)))
		{
			printf("in\n");
			
			if (vb[ct + 1] <= 122 && vb[ct + 1] >= 97)
			{
				ct++;
				printf("out\n");
				vb[ct] = vb[ct] - 32;
			}
		}
		ct++;
	}
	return (vb);
}
