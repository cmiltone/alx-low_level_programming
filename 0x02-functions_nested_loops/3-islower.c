/**
 * _islower - checks if charter is lowercase
 *
 * @c: - int
 *
 * return: returns 0 if lowercase  or 1 if uppercase
 *
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
