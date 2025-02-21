#include "main.h"
/**
 * *_strcpy - hj
 * Return: 0
 * @dest: r
 * @src: u
 */
char *_strcpy(char *dest, char *src)
{
	int i, ct = 0;

	while (src[ct] != '\0')
	{
		ct++;
	}
	i = 0;
	while (i <= ct)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
