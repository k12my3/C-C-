// 29-1-21: Use linked lists to perform queue operations

#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
void display();

struct list_queue
{
	int ele;
	struct list_queue *next;
} *front=NULL, *rear=NULL;
typedef struct list_queue q;

int main()
{
	int opt;
	while(1)
	{
		printf("\n\nChoose:\n1.Enqueue	2.Dequeue	3.Display	4.Exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1: enqueue(); break;
			case 2: dequeue(); break;
			case 3: display(); break;
			case 4: exit(0);
			default: printf("\nInvalid option");
		}
	}
	return 0;
}
void enqueue()
{
	q *temp = (q *)malloc(sizeof(q));
	if(temp==NULL)
	{
		printf("\nQueue is full.");
	}
	else
	{
		printf("\nEnter element to be inserted: ");
		scanf("%d", &temp->ele);
		temp->next=NULL;
		(front==NULL) ? front=temp : rear->next=temp;
	}
}
void dequeue()
{
	q *temp;
	if(front==NULL)
	{
		printf("\nQueue is empty. (underflow)");
	}
	else
	{
		printf("\n%d is deleted", temp->ele);
		temp=front;
		front=front->next;
	}
}
void display()
{
	if(front==NULL)
	{
		printf("\nQueue is Empty.");
	}
	else
	{
		printf("\nElements entered:");
		for(q *ptr=front; ptr!=NULL; ptr=ptr->next)
		{
			printf("\n%d", ptr->ele);
		}
	}
}
