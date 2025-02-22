/**
 * _strcmp - df
 * @s1: dd
 * @s2: fr
 * Return: 34
 */
int _strcmp(char *s1, char *s2)
{
	int bn, ct = 0;

	while (s1[ct] != '\0')
	{
		ct++;
	}
	bn = 0;
	while (s2[bn] != '\0')
	{
		bn++;
	}
	if (ct == bn)
		return (0);
	else if (ct < bn)
		return (-15);
	return (15);
}
