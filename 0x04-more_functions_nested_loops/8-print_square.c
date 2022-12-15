#include "main.h"

/**
 * print_square - prints hashes squares
 * @size: size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
	int i, sp;

	for (i = 0; i < size; i++)
	{
		for (sp = 0; sp < size; sp++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
