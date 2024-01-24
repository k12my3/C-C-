/*17-3-21: Day 18: Stacks and Queues check for palindrome using stacks and queues
To solve this challenge, we must first take each character in , enqueue it in a queue, and also push that same character onto a stack. Once that's done, we must dequeue the first 
character from the queue and pop the top character off the stack, then compare the two characters to see if they are the same; as long as the characters match, we continue dequeueing,
popping, and comparing each character until our containers are empty (a non-match means  isn't a palindrome).
>> Methods: void pushCharacter(char ch), void enqueueCharacter(char ch), char popCharacter() and char dequeueCharacter()*/

#include <stdio.h>
#include <string.h>
#define size 25

char stack[size], queue[size];
int top=-1, front=-1, rear=-1;

void pushCharacter(char ch)
{
	stack[++top]=ch;
}

void enqueueCharacter(char ch)
{
	queue[++rear]=ch;
}

char popCharacter()
{
	char x = stack[top--];
	return x;
}

char dequeueCharacter()
{
	char x = queue[++front];
	return x;
}

int main()
{
	char s[size]; 
	int flag=1;
	printf("\nEnter the string: ");
	scanf("%s", s);
	
	for(int i=0; i<strlen(s); i++)
	{
		enqueueCharacter(s[i]);
		pushCharacter(s[i]);
	}

	for(int i=0; i<strlen(s); i++)
	{
		if(dequeueCharacter() != popCharacter())
		{
			flag=0;
			break;
		}
	}

	(flag==1) ? printf("\nThe word, %s, is a palindrome.\n", s) : printf("\nThe word, %s, is not a palindrome.\n", s);
	return 0;
}
