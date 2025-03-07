/**
 * _strspn - er
 * @s: diu
 * @accept: yguy
 * Return: afe
 */
unsigned int _strspn(char *s, char *accept)
{
	int fg, ct = 0;

	while (s[ct] != '\0')
	{
		if (s[ct] == accept[0])
			break;
		ct++;
	}

	while (ct > 0)
	{
		if (!(s[ct] >= 65 && s[ct] <= 90) && !(s[ct] >= 97 && s[ct] <= 122))
			break;
		ct--;
	}

	fg = 0;
	while (s[ct] != '\0')
	{
		if (!(s[ct] >= 65 && s[ct] <= 90) && !(s[ct] >= 97 && s[ct] <= 122))
			break;
		fg++;
		ct++;
	}
	return (fg);
} 
