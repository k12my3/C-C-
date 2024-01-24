// Circular linked lists

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
} *head=NULL, *temp1, *temp2, *temp=NULL;

void create()
  {
    printf("\nEnter value: ");
    if(head==NULL)
    {
      temp=(struct node *)malloc (sizeof(struct node));
      scanf("%d",&temp->data);
      temp->next=temp;
      head=temp;
    }
    else
    {
    	temp1=(struct node*)malloc (sizeof(struct node));
	    scanf("%d",&temp1->data);
	    temp->next =temp1;
	    temp1->next=head;
	    temp=temp1;
    }
}

void insert()
{
    int c,p,i,count=0;
    temp=head;
    temp1=(struct node *)malloc(sizeof (struct node ));
    printf("\nChoose:   1.@Beginning    2.@ Given pos. :");
    scanf("%d",&c);
    printf("\nEnter value: ");
    scanf("%d",&temp1->data);
    switch(c)
    {
        case 1:
	    while (temp->next!= head)
	    {
	        temp=temp->next;
        }
	    temp->next=temp1;
	    temp1->next=head;
    	head=temp1;
        break;
        case 2:
	    temp2 = head;
	    printf("\nEnter pos. for element to be inserted: ");
	    scanf("%d", &p);
	    do
	    {
	        count++;
	        temp2 = temp2->next;
	    } while (temp2!= head); //count++;
	    if (p<1||p>count)
	    {
	        printf("\nInvalid position.");
	        return;
	    }
	    if(p==1)
	    {
	        while (temp->next!= head)
	        {
		        temp=temp->next;
	        }
	        temp->next=temp1;
	        temp1->next=head;
	        head=temp1;
	    }
        else
	    {
	        for(i=1;i<p-1;i++)
	        {
		        temp=temp->next;
	        }
	        temp1->next=temp->next;
	        temp->next=temp1;
	    }
	    break;
        default :
            printf("\nInvalid choice.");
    }
}

void del()
{
    int i,p,c=0;
    temp=temp1=temp2=head;
    if(temp==NULL)
    {
    	printf("\nEmpty list.");
		return;
    }
    else
    {
        printf("\nEnter po. for deletion: ");
	    scanf("%d",&p);
	    do
	    {
	        c++;
	        temp1 = temp1->next;
	    } while (temp1!= head); //c++;
	    if (p>c)
	    {
		    printf("\nInvalid position.");
		    return;
	    }
        if(p==1)
	    { 
            while (temp->next !=  head)
	       {
	            temp = temp->next;
	       }
	        head = temp2->next;
	        temp->next = head;
	        free(temp2);
	   }
        else
	   {
	        for(i=1;i<p-1;i++)
	        {
		        temp=temp->next;
	        }
	        temp->next=temp->next->next; //free(temp->next);
	   }
    }
}

void main()
{   int ch;
	while(1)
	{
		printf("\n\nChoose:\n1.Create		2.Insert	3.Delete	4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();break;
			case 2: insert(); break;
			case 3: del();break;
			case 4: exit(0);break;
			default : printf("\nInvalid option.");
		}
    }
}