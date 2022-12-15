#include "main.h"

/**
 * print_diagonal - print diagonal line and times
 * @n: times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, sp;

	for (i = 0; i < n; i++)
	{
		for (sp = 0; sp < i; sp++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
