//count no. of students getting above avg for given list 26/12/20
#include <stdio.h>
int main()
{
	int i,n,s=0,c=0;
	float avg;
	printf("Enter no. of students: ");
	scanf("%d", &n);
	float a[n];
	printf("Enter students marks:\n");
	for(i=0; i<n; i++)
	{
		scanf("%f", &a[i]);
		s=s+a[i];
	}
	avg=s/n;
	for (i=0; i<n; i++)
	{
		if(a[i]>=avg)
		{
			c++;
		}
	}
	printf("No. of students with marks>avg = %d",c);
	return 0;
}

