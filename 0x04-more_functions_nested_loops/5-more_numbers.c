#include "main.h"

/**
 * more_numbers - print more numbers
 * Return : followed with new line
 */
void more_numbers(void)
{
	int i, ro;

	for (i = 1; i <= 10; i++)
	{
		for (ro = 0; ro <= 14; ro++)
		{
			if (ro >= 10)
				_putchar('1');
			_putchar (ro % 10 + '0');
		}
		_putchar('\n');
	}
}
