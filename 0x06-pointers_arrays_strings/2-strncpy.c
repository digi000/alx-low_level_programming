/**
 * *_strncpy - gk
 * Return: gh
 * @dest: cd
 * @src: df
 * @n: se
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, ct = 0;

	while (src[ct] != '\0')
	{
		ct++;
	}

	i = 0;
	while (i < n)
	{
		if (i < ct)
		{
		dest[i] = src[i];
		i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
