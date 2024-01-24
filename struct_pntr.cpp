//structre pointer

#include <stdio.h>

struct student
{
	int rno;
	long int mob;
	char name[100];
	float weight;
}s,*p;
int main()
{
	p=&s;
	
	printf("\nEnter roll:  ");
	scanf("%d", &p->rno);
	printf("\nEnter mbile no: ");
	scanf("%ld", &p->mob);
	printf("\nEnter name:  ");
	scanf("%s", p->name);
	printf("\nEnter weight: ");
	scanf("%f", &p->weight);
	printf("\n\nRollno=%d",p->rno);
	printf("\nMobile=%ld", p->mob);
	printf("\nName=%s", p->name);
	printf("\nWeight=%f", p->weight);
}
// for 3 students s[3] and for loop similar to normal struct variable 
