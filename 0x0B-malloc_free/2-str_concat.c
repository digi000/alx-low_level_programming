#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - friu
 * @s1: ree
 * @s2: rw
 * Return: iru
 */
char *str_concat(char *s1, char *s2)
{
	char *gh;
	int su, n, i, j = 0;
	
	while (s1[j] != '\0' && s1 != NULL)
		j++;

	i = 0;
	while (s2[i] != '\0' && s2 != NULL)
		i++;
	su = i + j + 1;
	gh = malloc(sizeof(*gh) * su);

	if (gh == NULL)
		return (NULL);

	i = 0;
	n = 0;
	while (i <= su)
	{
		if (i < j)
			gh[i] = s1[i];
		else
		{
			gh[i] = s2[n];
			n++;
		}
		i++;
	}
	return (gh);
}
