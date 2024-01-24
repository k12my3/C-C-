/*P.3: If a crop is grown for once, the fertility of the soil reduces by 30. After cultivation, if the land is left free for one month, the fertility increases by a factor of 2. 
If the fertility becomes 0, the crop cannot be grown futher. Write a program to get the initial fertility and get the number of months the land is left free after every cultivation and 
find the number of times the crops are successfully grown, before the fertility becomes 0.
Note 1: If the fertility becomes 0 in the middle of the growth of crop, the crop stops growing.
Note 2: Stop getting the input if the fertility becomes 0. 
I/P Format: First - integer that corresponds to the initial fertility of the soil. Next inputs are number of months the land is left free after every cultivation.
O/P Format: Number of times the crops are grown successfully. */

#include <stdio.h>
int main()
{
	int i,j,f,c=0,m;
	scanf("%d", &f); //initial fertility.
	for(i=0; f>=30; i++)
	{
		f=f-30;
		scanf("%d", &m); 
		for(j=1; j<=m; j++)
		{
			f=f*2;
		}
		c++;
	}
	printf("\n%d",c);
    return 0;
}
