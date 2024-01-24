
//2010040027 : Quick Sort

#include <stdio.h>

long partition(long a[],long low,long high)
{
	long pivot,i,j,temp;
	pivot=a[low];
	i=low;
	j=high;
	while(i<j)
	{
		while(a[i]<=pivot)
			i++;
		while(a[j]>pivot)
			j--;
		
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}

void quicksort(long a[],long low,long high)
{
	if(low<high)
	{
		long pivot;
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}

int main()
{
	long n=0;
	scanf("%ld", &n); //size of array
	long a[n];

	for(long i=0;i<n;i++)
		scanf("%ld",&a[i]); //input array elements
	
	quicksort(a,0,n-1);

	for(long i=0;i<n;i++)
		printf("%ld ",a[i]); //print sorted array

	return 0;
}