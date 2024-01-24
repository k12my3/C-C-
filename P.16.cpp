//P.16: Write a program to reverse the digits of a number using while loop. Input consists of an integer value. Output consists of the reverse of the given number.

#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:\n");
	scanf("%d", &n);
	printf("\nReverse of number is ");
	while(n!=0)
	{
		printf("%d", n%10);
		n=n/10;
	}
	return 0;
}
