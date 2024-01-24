//P.6: Collect flags - III : Select the path with maximum value. I/P:3 lines, representing each path number. O/P: single line.

#include <stdio.h>
int main()
{
	int a,b,c,max=0;
	scanf("%d%d%d", &a,&b,&c);
	
	if(a>b && a>c)
	{
		max=a;
	}
	else if(b>a && b>c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	printf("\n	%d is the maximum number", max);
	return 0;
}
