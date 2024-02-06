#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
