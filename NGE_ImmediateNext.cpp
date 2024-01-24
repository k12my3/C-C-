//16-3-21: next gratest number - immediate next regardless of position in array

#include <stdio.h>

void bsort(int *a, int n)
{
	int p,i,temp;
	for(p=1; p<n; p++)
	{
		for(i=0; i<(n-p); i++)
		{
			if(a[i]>a[i+1])  
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	printf("\nEnter size of array: ");
	scanf("%d", &n);
	int a[n];
	
	printf("\nEnter array elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	bsort(a,n);
	
	for(int i=0; i<n; i++)
	{
		int next=0;
		{
			for(int j=i+1; j<n; j++)
			{
				if(a[j]>a[i])
				{
					next=a[j]; break;
				}
			}
			(next!=0) ? printf("\nNext greatest element of %d in array is %d.", a[i], next) : printf("\nNext greatest element of %d is not present.", a[i]);
		}
	}
}
