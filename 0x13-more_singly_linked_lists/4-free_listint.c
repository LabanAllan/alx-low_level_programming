#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - this is the function that is going to free listint_t list
 * *temp - temporary node.
 * 
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	 while (head)
	 {
	temp= head->next;
	 free (head);
	 head = temp;
	 }
}
