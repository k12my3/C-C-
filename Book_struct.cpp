//structure - book, author subject and cost
#include <stdio.h>

struct book
{
	float cost;
	char name[100];
	char author[100];
	char sub[100];
} b;
int main()
{
	printf("Enter book cost: ");
	scanf("%f", &b.cost);
	printf("Enter book name:  ");
	scanf("%s", &b.name);
	printf("Enter book author:  ");
	scanf("%s", &b.author);
	printf("Enter subject:  ");
	scanf("%s", &b.sub);
	
	printf("\nBook Cost =%f",b.cost);
	printf("\nBook name=  %s", b.name);
	printf("\nAuthor=  %s", b.author);
	printf("\nSubject=  %s", b.sub);
}
