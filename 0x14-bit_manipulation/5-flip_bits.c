/**
 * count_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @num: XOR of the two decimal numbers
 * Return: number
*/

unsigned int count_bits(int num)
{
	unsigned int count = 0;

	while (num > 0)
	{
		count += 1;
		num &= (num - 1);
	}
	return count;
}

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: decimal number
 * @m: decimal number
 * Return: number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return count_bits(n ^ m);
}
