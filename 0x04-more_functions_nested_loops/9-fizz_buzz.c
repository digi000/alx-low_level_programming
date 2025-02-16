#include <stdio.h>
/**
 * main - gh
 * Return: 0
 */
int main(void)
{
	int np = 1;

	while (np <= 100)
	{
		if (np % 3 == 0 && np % 5 == 0)
			printf("FizzBuzz ");
		else if (np % 3 == 0)
			printf("Fizz ");
		else if (np % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", np);
		np++;
	}
	printf("\n");
	return (0);
}
