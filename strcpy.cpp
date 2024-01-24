// program to copy one string to another using variable

#include <stdio.h>
#include <string.h>
void cpy(char[25], char[25]);

int main()
{
	char st1[25], st2[25];
	printf("Enter string to be copied:\n");
	scanf("%[^\n]", &st2);
	strcpy(st1, st2);
	printf("\nstring.h: %s", st1);
	printf("\nManual: ");
	cpy(st1,st2);
	return 0;
}
void cpy(char a[25], char b[25])
{
	for(int i=0; a[i]!='\0'; i++)
	{
		b[i]=a[i];
	}
	printf("%s", b);
}

