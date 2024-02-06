#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to a linked list
 * Return: number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
    	size_t count = 0;
	
	slow = head;
    	fast = head;

	while (slow && fast && fast->next)
    	{
	    	printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;

		if (slow == fast)
		{
		    	printf("-> [%p] %d\n", (void *)slow, slow->n);
	    		return count;
		}
    	}

    	while (slow)
    	{
	    	printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
    	}

    	return count;
}
