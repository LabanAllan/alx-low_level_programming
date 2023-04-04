#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * describe: function that prints all the elements 
 * @num: number of nudes
 * @h: node.
 * return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;


	while (h)
	{
		 printf("%d", h->n);
			 num++;
		 h = h->next;
	}
	return  (num);
}
