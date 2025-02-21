#include <stdio.h>
/**
 * print_array - hj
 * @a: st
 * @n: in
 */
void print_array(int *a, int n)
{
	int ct = 0;
	while (ct < n)
	{
		if (ct != (n-1))
			printf("%d, ", a[ct]);
		else
			printf("%d\n", a[ct]);
		ct++;
	}
}
