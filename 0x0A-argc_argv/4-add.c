#include <stdio.h>
#include <stdlib.h>
/**
 * main - gj
 * @argc: hc
 * @argv: fdv
 * Return: sds
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		
		if (*argv[i] >=48 && *argv[i] <= 57)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
