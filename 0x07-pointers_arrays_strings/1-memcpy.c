/**
 * _memcpy - gh
 * @dest: fh
 * @src: ffd
 * @n: csd
 * Return: fgh
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned ct = 0;

	while (ct < n)
	{
		dest[ct] = src[ct];
		ct++;
	}
	return (dest);
}
