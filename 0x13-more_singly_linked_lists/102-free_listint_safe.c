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
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
		count++;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
		return (count);
}
