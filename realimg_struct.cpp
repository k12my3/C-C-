#include <stdio.h>
struct complex
{
	int real;
	int img;
};
int main()
{
	struct complex *c1, *c2, *c3;
	printf("Real part of 1: ");
	scanf("%d", &c1->real);
	printf("Imagiary part of 1: ");
	scanf("%d", &c1->img);
	printf("Real part of 2: ");
	scanf("%d", &c2->real);
	printf("Imaginary part of 2: ");
	scanf("%d", &c2->img);
	
	c3->real=c1->real+c2->real;
	c3->img=c1->img+c2->img;
	
	printf("Sum of 2 complex nos= %d + i%d", c3->real, c3->img);
	return 0;
}
