/**
 * _isalpha - checks if character is alphabetic
 *
 * @c: the character
 *
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
