#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - jff
 * @str: jhf
 */
char *_strdup(char *str)
{
	char *jk;
	int i;

	if (*str == '\0')
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	jk = malloc(sizeof(*jk) * i);

	if (jk == NULL)
		return (NULL);

	i = 0;
	while(str[i] != '\0')
	{
		jk[i] = str[i];
		i++;
	}
	return (jk);
}
