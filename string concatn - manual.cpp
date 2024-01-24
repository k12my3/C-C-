//5-1-21 -> concatenate 2 strings
#include <stdio.h>
#include <string.h>

void cat(char[50], char[50]); //char* cat(-----
int main()
{
	char x[50],y[10];
	printf("Enter string-1: ");
	scanf("%[^\n]%*c", x);
	printf("Enter string-2: ");
	scanf("%[^\n]%*c", y);
	printf("\nWith string.h: %s", strcat(x,y));
	printf("\nManual: ");  // %s, cat(x,y);
	cat(x,y);
	return 0;
}
void cat(char a[50], char b[50])  //char* cat(-----
{
	char c[100];
	for(int i=0; a[i]!='\0'; i++)
	{
		c[i]=a[i];
	}
	for(int j=strlen(a); b[j]!='\0'; j++)
	{
		c[j]=b[j];
	}
	printf("%s", c);
}
