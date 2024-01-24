// student - gardes - key check -> 7-1-21
#include <stdio.h>
int grcmp(char[25][50], char*, int,int);
void rear(char[25][50], int);

int main()
{
	int m,n;
	char st[25][50], key[50];
	printf("Enter no. of students: ");
	scanf("%d", &m);
	printf("Enter no. of questions: ");
	scanf("%d", &n);
	printf("\nEnter students\' ans:\n");
	rear(st,m);
	printf("\nEnter grading key:\n");
	scanf("%s", key);
//	printf("\n	| S.No | Marks | Total | Student-ans | Keygrade-ans | ");
	for(int i=0; i<m; i++)
	{
		printf("\nStud.%d : %d/%d", i+1, grcmp(st,key,i,n),n);
//		printf("\n	| %2d | %5d | %5d | %15s | %15s |", i+1, grcmp(st,key,i,n),n,st[i],key);
	}
	return 0;
}
void rear(char a[25][50], int m)
{
	for(int i=0; i<m; i++)
	{
		scanf("%s",a[i]);
	}
}

int grcmp(char a[25][50], char *k, int i, int n)
{
	int j,c=0;
	for(j=0; j<n; j++)
	{
		if(k[j]==a[i][j])
		{
			c++;
		}
	}
	return c;
}
