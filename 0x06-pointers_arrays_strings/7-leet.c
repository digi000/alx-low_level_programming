/*
 * leet - crp
 * @hj: ch
 * Return: cg
 */
char *leet(char *hj)
{
	int k = 0;

	while (hj[k] != '\0')
	{
		if ((hj[k] == 'a') || (hj[k] == 'A'))
			hj[k] = '4';
		else if ((hj[k] == 'e') || (hj[k] == 'E'))
			hj[k] = '3';
		else if ((hj[k] == 'o') || (hj[k] == 'O'))
			hj[k] = '0';
		else if ((hj[k] == 't') || (hj[k] == 'T'))
			hj[k] = '7';
		else if ((hj[k] == 'l') || (hj[k] == 'L'))
			hj[k] = '1';
		k++;
	}
	return (hj);
}
