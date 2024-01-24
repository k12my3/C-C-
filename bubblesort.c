// program to write list of elements in order using bubble sort -> 30/12/20

#include <stdio.h>
void rear(int a[100], int);
void bsort(int a[100],int,char);
void prar(int a[100],int);

int main()
{
	int n;	char f;
	printf("Enter size of array: ");
	scanf("%d", &n);	int a[n]; 
	rear(a,n);
	printf("Display elements after each pass? -Y/N: ");
	scanf(" %c", &f);
	bsort(a,n,f);
	printf("\n\nFinal order:\n");
	prar(a,n);
	return 0;
}

void rear(int a[100], int n)
{
	printf("Enter array elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}

void bsort(int a[100], int n, char c)
{
	int p,temp,i;
	for(p=1; p<n; p++)
	{
		for(i=0; i<(n-p); i++)
		{
			if(a[i]>a[i+1])  // descending: a[i] < a[i+1]
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		if(c=='Y' || c=='y')
		{
			printf("\nPass-%d:  ",p);
			prar(a,n);
		}
	}
}

void prar(int a[100], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d  ", a[i]);
	}
}
