#include<stdio.h>

/**
 * main - Entry point
 * Description : 'using puts function'
 * Return: Always (0)(Success)
 */
	int main(void)
{
		char a;
		int b;
		long int c;
		long long int d;
		float f;
	printf("the size of char is :%lu byte(s)\n", (unsigned long)sizeof( char));
	printf("the size of int is :%lu byte(s)\n", (unsigned long)sizeof( int));
	printf("the size of long int is :%lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("the size of long long int is :%lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("the size of float is :%lu byte(s)\n", (unsigned long)sizeof( float));
return (0);
}
