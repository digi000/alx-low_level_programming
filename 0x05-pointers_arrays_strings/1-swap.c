#include <stdio.h>

/**
 * swap_int - sp num
 * @a: ck vl
 * @b: ck vl
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
