/* more headers goes there */

/**
 * _isdigit - returns 1 if c is a digit
 * @c: the number
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
