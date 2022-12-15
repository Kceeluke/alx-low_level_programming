#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints Buzz each numbers of 3 and 5
 * 3 multiplies print Fizz instead of the number
 * 5 multiplies print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
