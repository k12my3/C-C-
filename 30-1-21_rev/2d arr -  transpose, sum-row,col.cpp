//30-1-21: 2d arrays : transpose, sum of middle row ad middle column, sum of each row and column

#include <stdio.h>

void trans(int x[10][10], int m, int n)
{
	printf("\nTranspose matrix - A\'(%d x %d):\n", n,m);
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%5d", x[i][j]);
		}
		printf("\n");
	}
}
void smrc(int x[10][10], int m, int n)
{
	int smr=0, smc=0;
	for(int i=0; i<m; i++)
	{
		(n%2!=0) ? smc=smc+(x[i][n/2]) : smc=0;
	}
	for(int j=0; j<n; j++)
	{
		(m%2!=0) ? smr=smr+(x[m/2][j]) : smr=0;
	}
	printf("\nMiddle column sum: %d\nMiddle row sum: %d\n", smc, smr);
}
void src(int x[10][10], int m, int n)
{
	int sr,sc,i,j;
	for(i=0; i<m; i++)
	{
		sr=0;
		for(j=0; j<n; j++)
		{
			sr=sr+x[i][j];
		}
		printf("\nRow-%d sum: %d", i+1, sr);	
	}
	printf("\n");
	for(j=0; j<n; j++)
	{
		sc=0;
		for(i=0; i<m; i++)
		{
			sc=sc+x[i][j];
		}
		printf("\nCol-%d sum: %d", j+1, sc);	
	}
}
int main()
{
	int a[10][10],m,n;
	printf("Enter no. of rows and cols: ");
	scanf("%d%d", &m, &n); 
	printf("\nEnter elements:\n");
	for(int i=0;i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}	
	trans(a,m,n);
	smrc(a,m,n);
	src(a,m,n);
	return 0;
}
