#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description : 'using puts function'
 * Return: Always (0)(Success)
 */
int main(void)
{
	int n, last_digit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
			last_digit = n % 10;

			if (last_digit > 5)
				{
				printf("%i last digit of %d is %d and is greater than 5\n", last_digit);
				}
			else if (last_digit < 6 && (!0))
				{
				printf("%i and is less than 6 and not 0\n", last_digit);
				}
			else if ((last_digit == 0))
				{
				printf("%i and is 0\n", last_digit);
				}
			return (0);
}