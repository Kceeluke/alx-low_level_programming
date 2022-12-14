#include "main.h"
/**
 * jack_bauer - function that prints eveey minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows secon digit to rotate
 * for loop breaks before passing 24:00
 * Reture: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			-putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
