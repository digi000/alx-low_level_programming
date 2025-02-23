/**
 * *string_toupper - fd
 * Return: hj
 * @lp: jk
 */
char *string_toupper(char *lp)
{
	int i, g = 0;

	while (lp[g] != '\0')
	{
		g++;
	}
	i = 0;
	while (lp[i] != '\0')
	{
		if (lp[i] <= 122 && lp[i] >= 97)
		{
			lp[i] = lp[i] - 32;
		}
		i++;
	}
	return (lp);

}
