#include <stddef.h>
/**
 * _strstr - hyug
 * @haystack: fd
 * @needle: uh
 * Return: uhiu
 */
char *_strstr(char *haystack, char *needle)
{
	int ct = 0;

	while (haystack[ct] != '\0')
	{
		if (haystack[ct] == needle[0])
			return (&haystack[ct]);
		ct++;
	}
	return (NULL);
}
