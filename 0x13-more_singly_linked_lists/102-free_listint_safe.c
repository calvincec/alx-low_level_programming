#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint_safe - frees a list
 * @h: pointer to a pointer to a list
 * Return: size of list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (current < next)
		{
			break;
		}
		current = next;
	}
	*h = NULL;
	return (count);
}
