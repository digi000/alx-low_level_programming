#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ss;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		ss = va_arg(args, char *);
		if (i != n - 1)
		{
			if (ss)
				printf("%s", ss);
			else
				printf("(nil)");
			if (separator)
				printf("%s", separator);	
		}
		else
		{
			if (ss)
				printf("%s\n", ss);
			else
				printf("(nil)\n");
		}
		i++;
	}
	va_end(args);
}
