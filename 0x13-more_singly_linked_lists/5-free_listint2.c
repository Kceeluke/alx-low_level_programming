#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		/*set head addr to current*/
		current = *head;

		/*iterate through the whole list*/
		/*while setting the current node to temp*/
		while ((temp = current) != NULL)
		{
			/*set next node to curretnt*/
			current = current->next;
			/*free temp, that is the current node*/
			free(temp);
		}

		*head = NULL;
	}
}
