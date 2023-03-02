#include "main.h"
#include <stdio.h>
/**
 * main - Entry point 
 * Description : 
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}
