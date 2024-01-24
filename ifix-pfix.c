//16-3-21: stacks - infix to postfix

#include <stdio.h>
#include <string.h>
#define size 25

int top=-1;
char stack[size], ifix[size], pfix[size];

void push(char ch)
{
    if(top==size-1)
    {
    	printf("\nstack overflow");
	}
    else
    {
        stack[++top]=ch;
    }
}

char pop()
{
    char x=' ';
	if(top==-1)
    {
    	printf("stack is empty");
	}
    else
    {
    	x = stack[top];
        top--;
    }
	return x;
}

int priority(char ch)
{
	if(ch=='^')
		return 4;
	else if(ch=='*' || ch=='/' || ch=='%')
		return 3;
	else if(ch=='+' || ch=='-')
		return 2;
	else
		return 0;
}

void postfix(char ifix[size])
{
	int i, p=0;
	char s, t;
	for(i=0; i<strlen(ifix); i++)
	{
		s = ifix[i];
		switch(s)
		{
			case '(': 
				push(s);
				break;
			
			case ')':
				t=pop();
				while(t!='(')
				{
					pfix[p]=t;
					p++;
					t=pop();
				}
				break;
			
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
			case '%':
				
				while(priority(stack[top]) >= priority(s))
				{
					t=pop();
					pfix[p]=t;
					p++;
				}
				push(s);
				break;
			
			default: 
				pfix[p]=s;
				p++;
		}
	}
	
	while (top > -1)
	{
		t=pop();
		pfix[p]=t;
		p++;
	}

	pfix[p++] = '\0'; // to declare end of string - else would print junk chars
	printf("\n\nPostfix exp:	%s", pfix);	
}

int main()
{
	printf("\nEnter infix expression: ");
	scanf("%s", ifix);
	postfix(ifix);
    return 0;
}
