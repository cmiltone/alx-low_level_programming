/**
 * _abs - returns absolute value of an integer
 *
 * @n: the interger
 *
 * Return: whole non-negative number
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	} else if (n < 0)
	{
		return (n * -1);
	}
	return (0);
}
