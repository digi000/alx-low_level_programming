#include <unistd.h>
/**
 * main - prints no pp
 * Return: 0
 */
int main(void)
{
	char msg[] = "_putchar\n";

	write(1, msg, sizeof(msg) - 1);
	return (0);
}
