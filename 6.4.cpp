//week 6 q4>  Program to check whether a given square matrix is a Symmettric matrix or not

#include <stdio.h>
void rear(int x[10][10],int);
void trans(int x[10][10],int);
int sym(int x[10][10],int);

int main()
{
	int a[10][10],n;
	printf("Enter (equal) no. of rows, cols: ");
	scanf("%d",&n);
	rear(a,n);
	trans(a,n);
	if(sym(a,n)==1)
	{
		printf("\nGiven matrix is equal to its tranpose, the matrix is symmetric.");
	}
	else
	{
		printf("\nMatrix is not equal to its transpose, it is not symmetric.");
	}
	return 0;
}
void rear(int x[10][10], int n)
{
	int i,j;
	printf("\nEnter matrix elements:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
}
void trans(int x[10][10], int n)
{
	int i,j;
	printf("\nTranspose matrix:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%5d", x[j][i]);
		}
		printf("\n");
	}
}
int sym(int x[10][10], int n)
{
	int i,j,s=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(x[i][j]==x[j][i])
			{
				s=1;
			}
			else 
			{
				s=0;
				break;
			}
		}
	}
	return s;
}
