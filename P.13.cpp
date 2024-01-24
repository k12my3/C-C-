//P.13: Calculate the square of only the numbers whose least significant digit is 5. I/P:an integer. O/P: square of a number or a message if the number's least significant is not 5.
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d", &n);
	(n%10==5) ? printf("\nThe square of %d is %d", n, n*n) : printf("\nLeast significant of %d is not 5", n);
	return 0;
}

