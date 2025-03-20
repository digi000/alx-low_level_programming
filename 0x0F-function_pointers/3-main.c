#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int (*p)(int, int);
	int result;
	if (argc < 4)
	{
		printf("Error");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error");
		exit(99);
	}
	result = p(n1, n2);
	printf("%d", result);
	return (0);
}
