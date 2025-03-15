/**
 * is_prime_number - fhj
 * @n: jsh
 * Return: vg
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n != 2 && n % 2 == 0)
		return (0);
	else if (n != 3 && n % 3 == 0)
		return (0);
	else if (n != 5 && n % 5 == 0)
		return (0);
	else if (n != 7 && n % 7 == 0)
		return (0);
	return (1);
}
