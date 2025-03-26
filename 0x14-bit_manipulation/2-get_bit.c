int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 -1;
	while((int)size >= 0)
	{
		if (size == index)
		{
			return ((n >> size) & 1);
		}
		size--;
	}
	return (0);
}
