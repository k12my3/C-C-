/*In railway station an engine is connected with  the N number of Bogies which are connected in one direction from engine 
to the last bogie. Implement this as operations of creation, insertion, deletion and searching of a bogie using Single LL.*/


#include<stdio.h>
#include<stdlib.h>
struct node
{
	int bogie;
	struct node *next;
}*head=NULL,*temp1,*temp;

void create()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Bogie no: ");
	scanf("%d",&temp->bogie);
    temp->next=NULL;

	if(head==NULL)
		head=temp;
	else
	{
        for(temp1=head; temp1->next!=NULL; temp1=temp1->next)
            ;
        
        temp1->next=temp;

/* 		temp1->next=NULL;
		temp->next=temp1;
		temp=temp1;*/
	}
}

void insert()
{
	int ch,p,i;
	temp=head;
    temp1=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter bogie no: ");
	scanf("%d",&temp1->bogie);
	temp1->next=NULL;
	printf("\nChoose:   1) @Start  2) @Given pos.   3) @End :");
	scanf("%d",&ch);
    switch(ch)
	{
		case 1: 
            temp1->next=head;
			head=temp1;
            break;
		
        case 2:
            printf("\nEnter pos. to insert: ");
			scanf("%d",&p);
			for(i=1;i<p-1;i++)
			    temp=temp->next;
			temp1->next=temp->next;
			temp->next=temp1;
			break;
		
        case 3:
            while(temp->next!=NULL)
		        temp=temp->next;
			temp->next=temp1;
			break;
		
        default :printf("\nInvalid choice.");
	}
}

void del()
{
	int p,i;
	temp=head;
	printf("\nEnter pos. to delete: ");
	scanf("%d",&p);
	if(head==NULL)
		printf("\nEmpty list.");
    else
	{
		if(p==1)
		{
            head=head->next;
            printf("\nBogie-%d removed.", temp->bogie);
            free(temp);
		}
		else
		{
			for(i=0; i<(p-1); i++)
            {
                temp1=temp;
                temp=temp->next;
                if(temp==NULL)
                {
                    printf("\nInvalid position."); break;
                }
            }
            temp1->next=temp->next;
            printf("\nBogie-%d removed.", temp->bogie);
            free(temp);

    		/*	temp=temp->next;
			temp->next=temp->next->next;
		    free(temp->next);*/
		}
	}
}



void disp()
{
	if(head==NULL)
		printf("\nEmpty list.");
	else
	{
		for(temp=head; temp!=NULL; temp=temp->next)
		{
		   printf(" ---> %d ",temp->bogie);
		}
	}
}

void search()
{
	if(head==NULL)
		printf("\nEmpty list.");
	else
	{
        int k, i=0, f=0;
        printf("\nEnter Bogie no. to search: ");
        scanf("%d", &k);
		for(temp=head; temp!=NULL; temp=temp->next)
		{
            if(temp->bogie == k)
            {
                f=1; break;
            } i++;
		}
        (f==1) ? printf("\nBogie-%d found at pos. %d.", k, i+1) : printf("\nBogie-%d not found.", k);
	}
}

void main()
{   
    int ch;
    while(1)
    {
    	printf("\n\nChoose:\n1.Create   2.Insert    3.Delete    4.Search    5.Display   6.Exit\n");
    	scanf("%d",&ch);
	    switch(ch)
		{
			case 1: create();break;
			case 2: insert(); break;
			case 3: del();break;
			case 4: search();break;
			case 5: disp();break;
			case 6: exit(0);
			default : printf("\nInvalid choice.");
		}
     }
}


