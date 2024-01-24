// Write a C Program to count minimum number of denominations for given amount.

#include <stdio.h>
void den(int);

int main()
{
	int amt;
	printf("Enter the total amount: \n");
	scanf("%d", amt);
	den(amt);
	return 0;
}

void den(int a)
{
	if (a>=2000)
	{
		printf("\nNo. of 2000 Denominations: %d", a/2000);
		a=a%2000;
	}
	if (a>=500)
	{
		printf("\nNo. of 500 Denominations: %d", a/500);
		a=a%500;
	}
	if (a>=100)
	{
		printf("\nNo. of 100 Denominations: %d", a/100);
		a=a/100;
	}
	if (a>=50)
	{
		printf("\nNo. of Denominations: %d", a/50);
		a=a%50;
	}
	if (a>=10)
	{
		printf("\nNo. of Denominations: %d", a/10);
		a=a%10;
	}
	if (a>=1)
	{
		printf("\nNo. of Denominations: %d", a);
	}
}

