/**
 * rev_string - rs
 * @s: odm
 */
void rev_string(char *s)
{
	int i, j, ct = 0;
	char st[100];

	while (s[ct] != '\0')
	{
		ct++;
	}
	ct = ct - 1;
	j = 0;
	while (j <= ct)
	{
		st[j] = s[j];
		j++;
	}
	i = 0;
	while (ct >= 0)
	{
		s[i] = st[ct];
		i++;
		ct--;
	}
}
