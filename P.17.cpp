/*P.17: Cumulative sum Write a program to find the cumulative sum in an array.Ex: {2,3,5,7,1}, the cumulative sum array is {2,5,10,17,18}
I/P: n+1 integers. The first integer corresponds to 'n' , the size of the array. The next 'n' integers correspond to the elements in the array. Assume that the maximum value of n is 15.
The integers in the output are separated by a single space.*/

#include <stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter the number of elements in an array:\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Cumulative sum:\n");
	for(i=0; i<n; i++)
	{
		s=s+a[i];
		printf("%d ", s);
	}

	return 0;
}


