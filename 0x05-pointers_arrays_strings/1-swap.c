/**
 * swap_int - swaps ints
 *
 * @a: integer
 * @b: integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
