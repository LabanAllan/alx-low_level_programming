#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes head node of the linked list.
 * @n - head node to be returned.
 * @head - first node to be deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t  *temp;
	int num;

	if (!head || *head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
