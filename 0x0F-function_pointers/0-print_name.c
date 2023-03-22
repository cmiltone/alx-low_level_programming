/**
 * print_name - prints a name
 * @name: the name
 * @f: pointer to function that accepts a string
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
