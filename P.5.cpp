/*P.5: Disney Leap Year. I/P: single integer. O/P: single line.	Hint:In general terms the algorithm for calculating a leap year is as follows...
A year will be a leap year if it is divisible by 4 but not by 100. If a year is divisible by 4 and by 100, it is not a leap year unless it is also divisible by 400. */

#include <stdio.h>
int leap(int);
int main()
{
	int n;
	scanf("%d", &n);
	
	(leap(n)==1) ? printf("\n%d is a leap year", n) : printf("\n%d is not a leap year", n);
	return 0;
}
int leap(int n)
{
	int s=0;
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				s=1;
			}
		}
		else
		{
			s=1;
		}
	}
	return s;
}

