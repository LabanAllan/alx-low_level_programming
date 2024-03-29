#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint adds all data
 *
 * head -fist node in the linked list.
 *
 * returns sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

while (temp)
	{
		 sum += temp->n;
		 temp = temp->next;
	}
	return (sum);
}

