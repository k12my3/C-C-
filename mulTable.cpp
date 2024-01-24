#include <stdio.h>
int main()
{
	int i=1, n;
	printf("Enter n value: ");
	scanf("%d", &n);
	while(i<=10)
	{
		printf("%d x %d = %d\n", n, i, n*i);
		i++;
	}
}
