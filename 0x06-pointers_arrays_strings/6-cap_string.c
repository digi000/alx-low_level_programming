/**
 * *cap_string - hh
 * @vb: df
 * Return: wer
 */
char *cap_string(char *vb)
{
	int nb, ct = 0;
	char sh[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	while (vb[ct] != '\0')
	{
		nb = 0;
		while (nb <= 13)
		{
			if (vb[ct] == sh[nb])
			{
				if (vb[ct] == '\t')
				{
					vb[ct] = ' ';
				}
				if (vb[ct + 1] <= 122 && vb[ct + 1] >= 97)
				{
					ct++;
					vb[ct] = vb[ct] - 32;
					break;
				}
			}
			nb++;
		}
		ct++;
	}
	return (vb);
}
