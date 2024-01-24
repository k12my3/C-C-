//week 6 q5> Program to check whether a given square matrix is a upper triangular matrix or not

#include <stdio.h>
void rear(int x[10][10],int);
int uptr(int x[10][10],int);
int main()
{
	int a[10][10],n;
	printf("Enter (equal) no. of rows & cols: ");
	scanf("%d",&n);
	rear(a,n);
	if(uptr(a,n)==1)
	{
		printf("\nGiven matrix is Upper Triangular");
	}
	else
	{
		printf("\nGiven matrix is not upper triangular.");
	}
	return 0;
}
void rear(int x[10][10], int n)
{
	int i,j;
	printf("\nEnter elements:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
}
int uptr(int x[10][10], int n)
{
	int i,j,s;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i>j)
			{
				if(x[i][j]==0)
				{
					s=1;
				}
				else
				{
					s=0; break;
				}	
			}
		}
	}
	return s;
}
