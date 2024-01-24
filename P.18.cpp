/*P.18: Unique count: well grown plants(upper case alphabets), new crops (small letter alphabets).find how many types of crops are there. If there are 2 well grown potato plants(PP) and
3 small potato plants (ppp) , all the plants together will be counted as 1 plant type. 
I/P: The first line - number of plants, second - sequence of alphabets representing the plants in the field. O/P: total number of plant types in the field.*/

#include <stdio.h>
int main()
{
	int n,i,j,c=1;
	scanf("%d", &n);
	char a[n];
	
	for(i=0; i<n; i++)
	{
		scanf(" %c", &a[i]);
		if(a[i]>=97 && a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	for(i=1; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
        	if(a[i]==a[j])
			{
        	    break;
        	}
		}
		if(i==j)
		{
        	c++;
		}
    }
    
    printf("\n%d", c);	
	return 0;
}
