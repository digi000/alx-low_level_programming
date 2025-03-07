#include <stddef.h>
/**
 * _strchr - fh
 * @s: df
 * @c: sd
 * Return: we
 */
char *_strchr(char *s, char c)
{
	int ct = 0;

	while (s[ct] != '\0')
	{
		if (s[ct] == c)
		{
			return (&s[ct]);
		}
		ct++;
	}
	return (NULL);
}
