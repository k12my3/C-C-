//5-1-21 -> check whether a given name is in your list

#include <stdio.h>
#include <string.h>
void rear(char[10][50], int);
int cmp(char[10][50], int, char[50]);

int main()
{
	char x[10][50],n,y[50];
	printf("Enter no. of names: ");
	scanf("%d", &n);
	rear(x,n);
	printf("Enter search element: ");
	scanf("%s", y);
	if(cmp(x,n,y)==0)
	{
		printf("\nNot present.");
	} 
	else
	{
		printf("\nGiven name is present at pos. %d", cmp(x,n,y));
	}
	
	return 0;
}
void rear(char a[10][50], int n)
{
	printf("Enter the names:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%s", a[i]);
	}
}
int cmp(char a[10][50], int n, char b[50])
{
	for(int i=0; i<n; i++)
	{
		if(strcmp(a[i],b)==0)
		{
			return (i+1);
			break;
		}
	}
	return 0;
}
