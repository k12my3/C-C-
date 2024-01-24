// 7.1: Define a function which takes sting as argument & returns 1 if string is palindrome else 0. Use this function to count how many palindrome strings in the list of strings.

#include <stdio.h>
#include <string.h>
int pal(char[]);
int main()
{
	int i,n,c=0;
	printf("Enter no. of strings: ");
	scanf("%d", &n);
	char x[n][50];
	printf("Enter the strings:\n");
	for(i=0; i<n; i++)
	{
		scanf("%s", x[i]);
		if(pal(x[i])==1)
		{
			c++;
		}
	}
	printf("\nNo. of palindrome strings = %d",c);
	return 0;
}
int pal(char a[])
{
	int i,s;
	for(i=0; i<strlen(a); i++)
	{
		if(a[i]==a[strlen(a)-i-1])
		{
			s=1;
		}
		else
		{
			s=0; break;
		}
	}
	return s;
}
