#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
 * get_nodeint_at_index- returns the node at the certain index in the linked list.
 *@head  first node in the linked list.
 *
 * Return the node looking for if its NULL.
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;
	
	while (temp && i<index)
	{
	temp = temp->next;

	i++;

	}
	return (temp ? temp : NULL);
}
