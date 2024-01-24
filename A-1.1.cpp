//15-3-21: print difference of sum of the elements of principal diagonal and sum of the elements of other diagonal using 2 Dimensional arrays

#include <stdio.h>

int main()
{
	int m,n, s1=0, s2=0;
	printf("\nEnter no. of rows & cols: ");
	scanf("%d%d", &m, &n);
	int a[m][n];
	printf("\nEnter matrix elements:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
			
			if( i==(n-j-1))
			{
				s2=s2+a[i][j];
			}
		}
		s1=s1+a[i][i];
	}
	
	printf("\n\nDifference between sum of diagonals: %d - %d = %d", s1, s2, s1-s2);
	return 0;
}
