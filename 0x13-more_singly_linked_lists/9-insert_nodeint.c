#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to a linked list
 * @idx: index of list where node should be added
 * @n: integer to store in the new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *current = *head;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node = add_nodeint(&(current->next), n);
			return (new_node);
		}

		current = current->next;
		i++;
	}

	return (NULL);
}
