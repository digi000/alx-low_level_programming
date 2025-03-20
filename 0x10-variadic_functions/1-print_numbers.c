#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argt;

	va_start(argt, n);
	i = 0;
	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d", va_arg(argt, int));
			if (separator)
				printf("%s", separator);
		}
		else
			printf("%d\n", va_arg(argt, int));
		i++;
	}
	va_end(argt);
}
