// Linear search in array
#include <stdio.h>
int main()
{
	int i, n, s, a[n]; // s- search element
	
	printf("\nEnter array size: ");
	scanf("%d", &n);
	printf("\nEnter array elements: ");
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter search element: ");
	scanf("%d", &s);
	
	for (i=0; i<n; i++)
	{
		if (a[i] == s)
		{
			printf("\nElement %d was found at index %d", s, i);
			break;
		} 
	}	
	return 0;
}
