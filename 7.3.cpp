/*7.3: Given an int array, return a new array with double the length where its last element is the same as the  original array, and all the other elements are 0. 
makeLast([4, 5, 6]) ? [0, 0, 0, 0, 0, 6]
makeLast([1, 2]) ? [0, 0, 0, 2]
makeLast([3]) ? [0, 3] */ 

#include <stdio.h>
void makeLast(int[],int[],int);
int main()
{
	int z,i;
	printf("Enter no. of elements: ");
	scanf("%d", &z);
	int a[z],b[z*2];
	printf("\nEnter elements:\n");
	for(i=0; i<z; i++)
	{
		scanf("%d", &a[i]);
	}
	makeLast(a,b,z);
	for(i=0; i<(z*2); i++)
	{
		printf("%5d", b[i]);
	}
	return 0;
}
void makeLast(int x[],int y[],int n)
{
	for(int i=0; i<(n*2)-1; i++)
	{
		y[i]=0;
	}
	y[(n*2)-1]=x[n-1];
}
