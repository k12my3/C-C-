#include <stdio.h>
int main()
{
	int n,t1=0,t2=1,t3; 
	printf("Enter n: ");
	scanf("%d", &n);
	printf("%d %d", t1, t2);
	t3=t1+t2;

	while (t3<=n)
	{
		printf(" %d", t3);
		t1 = t2;
		t2= t3;
		t3=t1+t2;
	}
	
	return 0;
}
