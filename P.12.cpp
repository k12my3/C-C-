//P.12: 3 idiots: For 2 end points of a line (x1,y1) and (x2,y2), find the midpoint of the line. I/P: of 4 integers-x1,y1,x2,y2.

#include <stdio.h>
int main()
{
	int x1,y1,x2,y2;
	printf("X1:\n"); scanf("%d", &x1);
	printf("Y1:\n"); scanf("%d", &y1);
	printf("X2:\n"); scanf("%d", &x2);
	printf("Y2:\n"); scanf("%d", &y2);
	
	printf("\nBinoy's house is located at (%.1f,%.1f)", ((float)(x1+x2)/2), ((float)(y1+y2))/2);
	return 0;
}
