#include <stdlib.h>
/**
 * string_nconcat - jh
 * @s1: uhuy
 * @s2: hyuhfr
 * @n: iu
 * Return: iuh
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int su, h, i, j;
	unsigned int ik;
	char *ptr;

	j = 0;
	while (s1 != NULL && s1[j] != '\0')
		j++;

	i = 0;
	while (s2 != NULL && s2[i] != '\0')
		i++;

	ik = i;
	if (n > ik)
		n = i;

	su = j + n + 1;
	ptr = malloc(sizeof *ptr * su);
	if (ptr == NULL)
		return NULL;
	
	i = 0;
	h = 0;
	while (i < su - 1)
	{
		if (s1 != NULL && i < j)
			ptr[i] = s1[i];
		else if (s2 != NULL)
		{
			ptr[i] = s2[h];
			h++;
		}
		i++;
	}
	ptr[su] = '\0';
	return (ptr);
}
