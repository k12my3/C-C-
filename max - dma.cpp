//7-1-21: Program to find the maximum value in the accepted N values using malloc function.

#include <stdio.h>
#include <stdlib.h>
void rear(int *, int);
int max(int *, int);
int main()
{
	int *a,i,n;
	printf("Enter no. of elements: ");
	scanf("%d", &n);
	a=(int *)malloc(n*sizeof(int));
	rear(a,n);
	printf("\nMax of all elements = %d", max(a,n));
	return 0;
}
void rear(int *a, int n)
{
	printf("\nEnter array elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int max(int *a, int n)
{
	int i,m=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	return m;
}
