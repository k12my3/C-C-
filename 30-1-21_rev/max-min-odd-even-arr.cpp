//30-1-21: Min and max value of array + no. of odd, even values

#include <stdio.h>

int maxar(int* a, int n)
{
	int i, max=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

int minar(int* a, int n)
{
	int i, min=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}

int oddar(int* a, int n)
{
	int i,c=0;
	for(i=0; i<n; i++)
	{
		if(a[i]%2!=0)
		{
			c++;
		}
	}
	return c;
}

int evear(int* a, int n)
{
	int i,c=0;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			c++;
		}
	}
	return c;
}

int main()
{
	int n;
	printf("Enter no. of values: ");
	scanf("%d", &n);
	int x[n];
	printf("\nEnter elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &x[i]);
	}
	printf("\nMax of given array: %d, Min of given array: %d\nOdd element count: %d, Even element count: %d", maxar(x,n), minar(x,n), oddar(x,n), evear(x,n));
	return 0;
}
