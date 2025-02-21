/**
 * *_strcat - kl
 * @dest: df
 * @src: fg
 * Return: gg
 */
char *_strcat(char *dest, char *src)
{
        int i, ct = 0;

        while (dest[ct] != '\0')
        {
                ct++;
        }
        i = 0;
        while (src[i] != '\0')
        {
                dest[ct] = src[i];
                ct++;
                i++;
        }
	return (dest);
}
