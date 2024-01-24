/* 8.5: Write a program to read name, gender, age, and test report of COVID-19 patients (positive-1 and negative-0). Implement this using self referential structure.
 Create 2 nodes and try to link them and display the accepted data.*/

#include <stdio.h>

struct covid_node
{
	char name[20]; //data
	char gender; //data
	int age; //data
	int test; //data
	struct covid_node *next; //address
} cov1, cov2, *ptr;

int main()
{
	printf("\n1.) Enter Name, Gender, Age & Test-result:\n");
	scanf("%s %c%d%d", cov1.name, &cov1.gender, &cov1.age, &cov1.test);
	printf("\n2.) Enter Name, Gender, Age & Test-result:\n");
	scanf("%s %c%d%d", cov2.name, &cov2.gender, &cov2.age, &cov2.test);
	ptr=&cov1; //start pointer for linked list
	cov1.next=&cov2;	
	printf("\nPatients\' details:\n\n	|        Name        | Gender | Age | COV |");
	while(ptr!=NULL)
	{
		printf("\n	| %18s | %6c | %3d | %3s |", ptr->name, ptr->gender, ptr->age, ((ptr->test==0) ? "-ve" : "+ve"));
		ptr=ptr->next;
	}
	return 0;
}
