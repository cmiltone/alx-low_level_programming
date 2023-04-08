
/**
 * get_bit - returns  the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bits[1024], i, k;

	if (n == 0)
	{
		bits[0] = 0;
	}

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			bits[i] = 1;
		}	else if (k > 0)
		{
			bits[i] = 0;
		}
	}

	return bits[index];
}
