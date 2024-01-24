//16-3-21: Find the next greatest element in given array.

#include <stdio.h>

int main()
{
	printf("\n\n\t--------------- LAB - 1 : QUESTION - 2 ---------------\n");
	int n;
	printf("\nEnter size of array: ");
	scanf("%d", &n);
	int a[n];
	
	printf("\nEnter array elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		int next=0;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]>a[i])
			{
				next=a[j]; break;
			}
		}
		(next!=0) ? printf("\nNext greatest element of %d = %d.", a[i], next) : printf("\nNext greatest element of %d not present.", a[i]);
	}
	return 0;
}
