/*P.19: MAXIMUM OF 3 NUMBERS, accept 3 integers and find maximum among 3 numbers using functions and pointers.
Function Specification: int maximum(int *a,int *b, int *c) .This function returns the maximum among 3 numbers. -I/P: 3 integers. */

#include <stdio.h>
int maximum(int*, int*, int*);
int main()
{
	int a,b,c;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value f b:\n");
	scanf("%d", &b);
	printf("Enter the value of c:\n");
	scanf("%d", &c);
	printf("Maximum element is %d", maximum(&a,&b,&c));
	return 0;
}
int maximum(int *a, int *b, int *c)
{
	if(*a>*b && *a>*c)
	{
		return *a;
	}
	else if(*b>*a && *b>*c)
	{
		return *b;
	}
	else
	{
		return *c;
	}
}

