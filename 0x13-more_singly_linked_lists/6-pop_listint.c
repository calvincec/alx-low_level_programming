#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to a pointer to a linked list
 * Return: head's node's data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}
