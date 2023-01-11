#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars and initilizes it with
 * a specific char.
 * @size: size of array.
 * @c: char to initialize array with.
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* chebk if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
