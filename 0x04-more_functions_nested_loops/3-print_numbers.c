/**
 * print_numbers - 0-9
 */
void print_numbers(void)
{
	int ct = 0;

	while (ct < 10)
	{
		if (ct != 9)
			printf("%d", ct);
		else
			printf("%d\n", ct)
	}
}
