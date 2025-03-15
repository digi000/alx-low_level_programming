#include <stddef.h>
/**
 * _strpbrk - jhg
 * @s: dhj
 * @accept: dhiu
 * Return: jgy
 */
char *_strpbrk(char *s, char *accept)
{
	int j, ct = 0;

	while (s[ct] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[ct] == accept[j])
			{
				return (&s[ct]);
			}
			j++;
		}
		
		ct++;
	}
	return (NULL);
}
