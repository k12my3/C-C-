/*P.20: 20. DISTANCE BETWEEN 2 POINTS, accept 2 points, calculate distance between them using functions and pointers. : float distance(int *x1, int *y1, int *x2, int *y2)
I/P: 4 integers- The first 2 integers refers to x and y coordinate of Point 1. The next 2 integers refers to x and y coordinate of Point 2. O/P:Display correct to 2 decimal places.*/

#include <stdio.h>
#include <math.h>
float distance (int*, int*, int*, int*);
int main()
{
	int x1,y1,x2,y2;
	printf("Enter x1:\n"); scanf("%d", &x1);
	printf("Enter y1:\n"); scanf("%d", &y1);
	printf("Enter x2:\n"); scanf("%d", &x2);
	printf("Enter y2:\n"); scanf("%d", &y2);
	
	printf("\nDistance between 2 points is %.2f", distance(&x1,&y1,&x2,&y2));
	
	return 0;
}
float distance(int *x1, int *y1, int *x2, int *y2)
{
	float d = sqrt(pow((*x2-*x1),2) + pow((*y2-*y1),2));
	return d;
}
