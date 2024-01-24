// 30-1-21: Linear, binary array search + bubble sort(also known as exchange sort)
#include <stdio.h>

int linear(int* a, int n, int k)
{
	for(int i=0; i<n; i++)
	{
		if(a[i]==k)
		{
			return (i+1);
		}
	}
	return 0;
}

int binary(int* a, int n, int k)
{
/*	printf("\nbefore sorting:");
	for(int i=0; i<n; i++)
	{
		printf("\na[%d] = %d", i, a[i]);
	}*/
	int l=0,u=n-1,mid;
	while (l<=u)
	{
		mid = l + (u-l) / 2; //	works with all the positions, genral: (u+l)/2 
		if(a[mid]==k)
		{
			return (mid+1);
		}
		if(k>a[mid])
		{
			l=mid+1;
		}
		else
		{
			u=mid-1;
		}
	}
	return 0;
}

void bsort(int *a, int n)
{
	int i,p,temp;
	printf("\n\nBubble sort:");
	for(p=1; p<n; p++)
	{
		for(i=0; i<(n-p); i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		printf("\nElements after pass-%d:	", p);
		for(i=0; i<n; i++)
		{
			printf("%5d", a[i]);
		}
	}
}

int main()
{
	int n, key;
	printf("Enter no. of elements: ");
	scanf("%d", &n); int x[n];
	printf("\nEnter elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &x[i]);
	}
	printf("\nEnter search element: ");
	scanf("%d", &key);
	printf("\n\nUsing linear search: ");
	(linear(x,n,key)!=0) ? printf("%d located at pos. %d", key, linear(x,n,key)) : printf("%d is not found", key);
	printf("\n\nUsing binary search:");
	bsort(x,n);
	(binary(x,n,key)!=0) ? printf("\n\n%d located at pos. %d", key, binary(x,n,key)) : printf("\n\n%d is not found", key);
	
	return 0;
}
