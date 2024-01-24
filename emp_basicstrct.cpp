#include <stdio.h>
struct employee
{
	char name[30];
	int id;
	float sal;
	char* add;
};
int main()
{
	struct employee ea={"Kaamya",2324,23.24,"JPN Nagar, Miyapur"};
	printf("\nName=%s", ea.name);
	printf("\nID=%d", ea.id);
	printf("\nSalary= %f", ea.sal);
	printf("\nAddress= %s", ea.add);
	return 0;
}
