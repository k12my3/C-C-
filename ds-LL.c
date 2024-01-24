// single linked list -  sem 2

#include <stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
} *head=NULL, *temp1, *temp=NULL;

void create()
{
	if(head==NULL)
	{
        temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter value: ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		head=temp;
	}
	else
	{
		temp1=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter value: ");
		scanf("%d",&temp1->data);
		temp1->next=NULL;
		temp->next=temp1;
		temp=temp1;
	}
}

void insert()
{
	int ch,p,i;
	temp=head;
    temp1=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter value: ");
	scanf("%d",&temp1->data);
	temp1->next=NULL;
	printf("\nChoose:	1.@ Begining	2.@ Given pos.	3.@ End\n");
	scanf("%d",&ch);
    switch(ch)
	{
		case 1: 
			temp1->next=head;
			head=temp1;break;
		case 2:
			printf("Enter pos. of insertion: ");
			scanf("%d",&p);
			for(i=1;i<p-1;i++)
			{temp=temp->next;
			}
			temp1->next=temp->next;
			temp->next=temp1;
			break;
		case 3:
			while(temp->next!=NULL)
			{temp=temp->next;
			}
			temp->next=temp1;
			break;
		default :
			printf("\nInvalid choice.");
	}
}

void del()
{
	int p,i;
	temp=head;
	printf("\nEnter pos. of element to be deleted: ");
	scanf("%d",&p);
	if(head==NULL)
	{
		printf("\nEmpty list.");
	}
    else
	{
		if(p==1)
		{
		head=temp->next;
		free(temp);
		}
		else
		{
			for(i=1;i<p-1;i++)
			{
			temp=temp->next;
			}
			temp->next=temp->next->next;
		free(temp->next);
		}
	}
}

void display()
{
	temp=head;
	if(head==NULL)
		{
			printf("\nEmpty list.");
		}
	else
	{
	    while(temp!=NULL)
	    {
    	   printf("%d\t",temp->data);
    	   temp=temp->next;
    	}
	}
}

void main()
{   int ch;
	while(1)
	{
		printf("\n\nChoose:\n1.Create		2.Insert	3.Delete	4.Display	5.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();break;
			case 2: insert(); break;
			case 3: del();break;
			case 4: display();break;
			case 5: exit(0);break;
			default : printf("\nInvalid option.");
		}
    }
}