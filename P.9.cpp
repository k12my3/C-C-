/*P.9: Card Game III: pick the cards which are shuffled on the table until the card with the number -999. Once he picks the card with number -999,
 The sum of all numbers in the cards = points. Program to sum all numbers in the card (exclude -999 when calculating the sum) using for loop. I/P: list of integers. O/P:single line.*/

#include <stdio.h>
int main()
{
	int i,n,s=999;
	for(i=0; n!=(-999); i++)
	{
		scanf("%d", &n);
		s=s+n;
	}
	printf("\nThe credit points is %d", s);
	return 0;
}
