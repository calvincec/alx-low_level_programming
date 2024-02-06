#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to a linked list
 * @index: index of node to be returned
 * Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	return (current ? current : NULL);
}
