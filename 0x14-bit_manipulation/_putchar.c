#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putachar -writes the character to be printed out.
 * @c- character to print.
 * Return 1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
