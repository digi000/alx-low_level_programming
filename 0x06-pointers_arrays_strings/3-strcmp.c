/**
 * _strcmp - df
 * @s1: dd
 * @s2: fr
 * Return: 34
 */
int _strcmp(char *s1, char *s2)
{
	int bn, dr, ct = 0;

	while (s1[ct] != '\0')
	{
		ct++;
	}
	dr = 0;
	while (s2[dr] != '\0')
	{
		dr++;
	}
	bn = 0;
	while (s2[bn] != '\0')
	{
		bn++;
	}
	if (ct == bn)
		return (0);
	else if (ct < bn)
		return (ct - dr);
	return (ct - dr);
}
