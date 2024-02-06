#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_listint2 - frees a list
 * @head: pointer to a pointer to a linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
