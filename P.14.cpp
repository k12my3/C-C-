/*P.14: watermelon: the watermelon was weighed, and the scales showed w kilos. divide the watermelon in such a way that each of the two parts weighs even number of kilos,
 at the same time it is not obligatory that the parts are equal. But the difference between the 2 parts should be minimal.  w (1<=w<=100)
 I/P:input line contains integer number w O/P: If the input value is not within the range, print "Invalid Input".
In the first line of the output, print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
If the first line of the output is YES, the next line of the output consists of 2 integers separated by a space. In case of distinct integers, the smallest number should appear first.*/
#include <stdio.h>
int main()
{
	int w;
	scanf("%d", &w);
	if(1<=w && w<=100)
	{
		if(w%2==0)
		{
			if((w/2)%2==0)
			{
				printf("\nYES\n\n%d	%d", (w/2), (w/2));	
			}
			else
			{
				printf("\nYES\n\n%d %d", (w/2)-1, (w/2)+1);	
			}
		}
		else
		{
			printf("\nNO");
		}
	}
	else
	{
		printf("\nInvalid Input");
	}
	return 0;
}
