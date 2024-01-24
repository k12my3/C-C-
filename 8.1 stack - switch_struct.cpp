// 18-1-21: implement stack operationsusing push, pop and display(printf) functions . + week 8: peep/peek function

#include <stdio.h>
#include <stdlib.h>
#define size 10

void push();
void pop();
void display();
void peep();

struct stack
{
	int a[size];
	int top;
};
struct stack s={{0},-1};

int main()
{
	int opt;
	while(1)
	{
		printf("\n\nEnter your option:\n1.Push\n2.Pop\n3.Display\n4.Peep/Peek\n5.Exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: peep(); break;
			case 5: exit(0);
			default: printf("\nInvalid option");
		}
	}
	return 0;
}
void push()
{
	if(s.top==size-1)  //top is a member of structure
	{
		printf("\nStack is full");
	}
	else
	{
		printf("\nEnter element to be pushed: ");
		s.top++;
		scanf("%d", &s.a[s.top]);
	}
}
void pop()
{
	if(s.top==-1)
	{
		printf("\nStack is empty. (underflow)");
	}
	else
	{
		printf("\n%d is deleted", s.a[s.top]);
		s.top--;
	}
}
void display()
{
	printf("\nElements entered:");
	for(int i=s.top; i>=0; i--)
	{
		printf("\n%d", s.a[i]);
	}
}
void peep()
{
	if(s.top<=-1)
	{
		printf("\nStack Underflow.");
	}
	else
	{
		printf("\nTop value in stack = %d", s.a[s.top]);
	}
}
