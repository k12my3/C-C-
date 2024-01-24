// 2D array -> sum of two matrices - 31/12/20

#include <stdio.h>
void rear(int[10][10], int, int);
void prar(int[10][10], int, int);
void sumn(int[10][10], int[10][10], int[10][10], int,int);
int main ()
{
  int a[10][10], b[10][10], c[10][10], i, j, r1, c1, r2, c2;
  printf ("Enter no.of rows & cols of matrix-1: ");
  scanf ("%d%d", &r1, &c1);
  printf ("Enter no.of rows & cols of matrix-2: ");
  scanf ("%d%d", &r2, &c2);
  if(r1==r2 && c1==c2)
  {
    rear(a,r1,c1);  
    rear(b,r2,c2);
    sumn(a,b,c,r1,c2);
    printf("\nSum matrix:\n");
	prar(c,r1,c2); 
  }
  else
  {
	printf("\nMatrix addition not possible.");
  }
  return 0;
}
void rear(int x[10][10], int m, int n)
{
	printf("Enter elements:\n");
	for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}
void prar(int x[10][10], int m, int n)
{
	for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%7d",x[i][j]);
        }
        printf("\n");
    }
}
void sumn(int x[10][10], int y[10][10], int z[10][10], int m, int n)
{
	for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }
}
