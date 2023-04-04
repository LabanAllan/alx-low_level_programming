#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint- function to add node.
 * *head -  first node.
 * *new - inserting new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
		if(!new)
		return (NULL);
		new->next = n;
		new->next = *head;
		*head = new;

			return (new);
			}
