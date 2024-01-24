//30-1-21: two big numbers are given in string format, develop a program to add 2 given string numbers. each string - min 1 digit, max - 100 digits

#include <stdio.h>

int main()
{
	char s1[100], s2[100];
	int a1, a2;
	printf("Enter string-1: ");
	scanf("%s", s1);
	printf("Enter string-2: ");
	scanf("%s", s2);
	a1 = s1 -'0';
	a2 = s2 - '0';
	printf("\n\nSum of no.s = %d", a1+a2);
	
	char one = '1';
	int one_num = one - '0';
	printf("%d\n", one_num);
	
	return 0;
}
