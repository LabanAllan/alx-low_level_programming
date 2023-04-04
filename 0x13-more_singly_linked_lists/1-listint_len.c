#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len(const listint_t *h)-return the list of element in linked list
 * @h:linked list of type int to tranverse.
 * Returns the number of element. 
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
