#include<stdio.h>
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("the size of char is :%lu byte(s)\n", (unsigned long)sizeof(a));
printf("the size of int is :%lu byte(s)\n", (unsigned long)sizeof(b));
printf("the size of long int is :%lu byte(s)\n", (unsigned long)sizeof(c));
printf("the size of long long int is :%lu byte(s)\n", (unsigned long)sizeof(d));
printf("the size of float is :%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
