/**
 * *_strncat - kl
 * @dest: dd
 * @src: effd
 * @n: fg
 * Return: wf
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, vs, ct = 0;

	while (dest[ct] != '\0')
	{
		ct++;
	}
	vs = 0;
	while (dest[vs] != '\0')
	{
		vs++;
	}
	i = 0;
	while (i < n && i < vs)
	{
		dest[ct] = src[i];
		ct++;
		i++;
	}
	return (dest);
}
