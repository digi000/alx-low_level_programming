#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list args;

	va_start(args, n);
	i = 0;
	total = 0;
	while(i < n)
	{
		total += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (total);
}
