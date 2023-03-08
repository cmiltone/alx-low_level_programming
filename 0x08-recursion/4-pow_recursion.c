/**
 * _pow_recursion - return x raised to power y
 *
 * @x: number
 * @y: number
 *
 * Return: int;
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
