#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int sum;
	int count;
	int intz;
	int m;

	for (m = 0; b[m] != NULL; m++)
	{}
	i = 0;
	while (i < m)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	sum = 0;
	count = 1;
	intz = 0;
	i = i - 1;
	while ((int)i >= 0)
	{
		if (b[i] == '1')
			sum = sum + count;
		count = count + count;
		intz++;
		i--;
	}
	return (abs(sum));
}
