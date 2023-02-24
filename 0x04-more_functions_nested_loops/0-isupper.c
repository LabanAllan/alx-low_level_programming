#include "main.h"
#include <stdio.h>
/**
 * main - uppercase
 * Description : checking whether ch is an uppercase alphabet or not
 * Return:  0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
