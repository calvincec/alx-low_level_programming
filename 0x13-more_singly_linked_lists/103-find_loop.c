#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer to a linked list
 * Return: address of the node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
	}
	return (NULL);
}
