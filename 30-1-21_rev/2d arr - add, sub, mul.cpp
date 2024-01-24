//30-1-21: 2d array - matrices - addition, multiplication, subtraction.

#include <stdio.h>

void rear(int x[10][10], int m, int n)
{
	printf("\nEnter matrix elements:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
}
void madd(int x[10][10], int y[10][10], int m, int n)
{
	printf("\nSum of given matrices:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%5d", x[i][j] + y[i][j]);
		}
		printf("\n");
	}
}
void msub(int x[10][10], int y[10][10], int m, int n)
{
	printf("\nDifference of given matrices:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%5d", x[i][j] - y[i][j]);
		}
		printf("\n");
	}
}
void mmul(int x[10][10], int y[10][10], int m1, int n1, int n2)
{
	printf("\nProduct matrix P(%dx%d):\n", m1, n2);
	int z[m1][n2], i, j, k; //dimensions of product matrix - m1 x n2
	for(i=0; i<m1; i++)
	{
		for(j=0; j<n2; j++)
		{
			z[i][j] = 0;
			for(k=0; k<n1; k++)
			{
				z[i][j] = z[i][j] + x[i][k]*y[k][j];  //z[0][0] = 0 + a[0][0] + b[0][0]; prev-valu + a[0][1] + b[1][0], etc..
			}
			printf("%5d", z[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[10][10], b[10][10], m1,n1,m2,n2;
	printf("Enter no. of rows, cols of Matrix-A: ");
	scanf("%d%d", &m1, &n1);
	printf("Enter no. of rows, cols of Matrix-B: ");
	scanf("%d%d", &m2, &n2);
	if(m1==m2 && n1==n2)
	{
		rear(a,m1,n1);
		rear(b,m2,n2);
		madd(a,b,m1,n1); 
		msub(a,b,m1,n1);
		mmul(a,b,m1,n1,n2);
	}
	else if (n1==m2)
	{
		printf("\n\nOnly matrix multiplication possible.");
		rear(a,m1,n1);
		rear(b,m2, n2);
		mmul(a,b,m1,n1,n2);
	}
	else
	{
		printf("\n\nMatrix operations not possible.");
	}
}
