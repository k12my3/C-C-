/*8-1-21: Program using structures to accept student details like rno, name, marks in 3 subjects. Calculate total and average and display all the details. 
All these should be members of a structure, display all the student details sorting on total marks.*/

#include <stdio.h>
struct student
{
	char name[25];
	int age;
	float m[3];
	float avg;
	float sum;
};

void rest(struct student st[],int);
void bsort(struct student st[],int);
void prst(struct student st[],int);


int main()
{
	int n,i,p,j;
	printf("Enter no. of entries: ");
	scanf("%d", &n);
	struct student st[n];
	rest(st,n);
	bsort(st,n);
	printf("\nStudent details - Total Marks Sorting:\n\n	| No |      Name       | Age |  ST.M-1  |  ST.M-2  |   ST.M3  |   Total    |   ST-Avg   |");
	prst(st,n);
	return 0;
}
void rest(struct student st[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\n%d) Enter Name, Age & Marks-1,2,3:\n", i+1);
		scanf("%s%d%f%f%f", st[i].name, &st[i].age, &st[i].m[0], &st[i].m[1], &st[i].m[2]);
		st[i].sum=st[i].m[0]+st[i].m[1]+st[i].m[2];
		st[i].avg=(st[i].sum/3);
	}
}
void prst(struct student st[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\n	| %2d | %15s | %3d | %8.2f | %8.2f | %8.2f | %10.2f | %10.2f |", i+1, st[i].name, st[i].age, st[i].m[0], st[i].m[1], st[i].m[2], st[i].sum, st[i].avg);
	}
}
void bsort(struct student st[], int n)
{
	int p,i;
	student temp;
	for(p=1; p<n; p++)
	{
		for(i=0; i<(n-p); i++)
		{
			if(st[i].sum > st[i+1].sum)  
			{
				temp = st[i];
				st[i] = st[i+1];
				st[i+1] = temp;
			}

		}
	}
}
