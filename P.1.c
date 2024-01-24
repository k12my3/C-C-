/*P.1: Given the 3 vertices {(x1,y1), (x2,y2) and (x3,y3)} of a triangle, write a program to determine the point which is centroid of the 3 vertices.
I/P :6 integers. The first integer - x1 ,second integer - y1, third and fouth integers - x2 and y2 respectively & fifth and sixth integers - x3 and y3 respectively.
O/P :All floating point values are displayed correct to 1 decimal place */

#include <stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("X1:\n"); scanf("%d", &x1);
	printf("Y1:\n"); scanf("%d", &y1);
	printf("X2:\n"); scanf("%d", &x2);
	printf("Y2:\n"); scanf("%d", &y2);
	printf("X3:\n"); scanf("%d", &x3);
	printf("Y3:\n"); scanf("%d", &y3);

	printf("\nDinesh\'s house is located at (%.1f, %.1f)", ((float)(x1+x2+x3)/3), ((float)(y1+y2+y3)/3));
	return 0;
}
