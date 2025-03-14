#include <stdio.h>
#include <stdlib.h>
/**
 * main - fh
 * @argc: hjjh
 * @argv: ii
 * Return: ygud
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
