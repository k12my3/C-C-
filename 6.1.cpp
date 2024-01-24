/* week 6 q1> 1) Given an array of integer values, return true if 6 appears as either the first or last element in the array using function.
Eg: 
 firstLast6([1, 2, 6]) ? true
 firstLast6([6, 1, 2, 3]) ? true
 firstLast6([13, 6, 1, 2, 3]) ? false */

#include <stdio.h>
void rear(int a[100], int);
int firstLast6(int a[100], int);
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int a[n];
	
	rear(a,n);
	printf(firstLast6(a,n) ? "\ntrue" : "\nfalse");
	return 0;
}
void rear(int a[100], int n)
{
	int i;
	printf("Enter array elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int firstLast6(int a[100], int n)
{
	if(a[0]==6 || a[n-1]==6)
	{
		return true;
	}
	else
	{
		return false;
	}
}
