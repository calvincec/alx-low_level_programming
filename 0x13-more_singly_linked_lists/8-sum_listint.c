#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * sum_listint - returns sum of all data of a list
 * @head: pointer to a linked list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
