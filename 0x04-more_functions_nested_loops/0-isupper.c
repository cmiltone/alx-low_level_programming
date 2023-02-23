/**
 * _isupper - checks if charter is uppercase
 *
 * @c: - int
 *
 * Return: returns 0 if lowercase  or 1 if uppercase
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}

