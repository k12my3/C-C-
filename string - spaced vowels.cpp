//4-1-21: program to display the no. of vowels in the string

#include <stdio.h>
int vow(char a[50]);
int main()
{
	char st[50];
	printf("Enter the string:\n");
	scanf("%[^\n]",st);
	printf("\nNo. of vowels: %d", vow(st));
	return 0;
}
int vow(char a[50])
{
	int c,i;
	printf("\n\nVowels present: ");
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]=='a' || a[i]=='e' ||  a[i]=='i' || a[i]=='o' || a[i]=='u'
			|| a[i]=='A' || a[i]=='E' || a[i]=='I'|| a[i]=='O' || a[i]=='U')
		{
			c++;
			printf("%3c", a[i]);
		}
	}
	
	return c;
}
