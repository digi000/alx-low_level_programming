/**
 * _memset - hf
 * @s: fh
 * @b: fol
 * @n: 23
 * Return: gjh
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ct = 0;

	while (ct < n)
	{
		s[ct] = b;
		ct++;
	}
	return (s);
}
