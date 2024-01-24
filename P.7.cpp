/*P.7: Calculate grade: accept the marks in 3 subjects of a student, calculate the average mark of the student and print the student's grade. 
If the average mark is greater than or equal to 90, then the grade is 'A'. If the average mark is 80 and between 80 and 90, then the grade is 'B'.
If the average mark is  70 and between 70 and 80, then the grade is 'C'. If the average mark is  60 and between 60 and 70, then the grade is 'D'.
If the average mark is 50 and between 50 and 60, then the grade is 'E'. If the average mark is less than 50, then the grade is 'F'.
I/P:3 lines, each of an integer. O/P: single line. */
#include <stdio.h>
int main()
{
	int a,b,c;
	char x;
	scanf("%d%d%d", &a, &b, &c); // 3 marks

	switch((a+b+c)/3/10)
	{
		case (10|| 9): x='A'; break;
		case 8: x='B'; break;
		case 7: x='C'; break;
		case 6: x='D'; break;
		case 5: x='E'; break;
		default: x='F';
	}
	
	printf("\nThe grade is %c", x);
	return 0;
}
