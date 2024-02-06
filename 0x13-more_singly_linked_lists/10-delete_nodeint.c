#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_nodeint_at_index - delete node at index of a list
 * @head: pointer to a pointer of a linked list
 * @index: index of node to be deleted.
 * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	current = *head;
	prev = NULL;
	i = 0;

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

		if (current == NULL)
		return (-1);

		prev->next = current->next;
		free(current);

		return 1;
}
