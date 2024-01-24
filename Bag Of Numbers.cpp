/*2010040027_ECE.A_25-03-2021: Vikas is given a bag which consists of numbers (integers) blocks,Vikas has to organize the numbers again in the same order as he has inserted it into the
bag, i.e. the first number inserted into the bag by Vikas should be picked up first followed by other numbers in series. Help Vikas to complete this work in O(n) time complexity with 
the condition to use one extra bag to complete the work (assume that the bags are compact and is in the form of a stack structure and has the same width as that of the number blocks 
and is large enough to fill the bag to the top and the number taken from bag is in reverse order). Hint: You may use the concept of Stacks. */

#include <stdio.h>
#define size 10000

int stack[size], top=-1;

void push()
{
    if(top==size-1)
    	printf("\nFull stack (overflow).");
    
	else
    {
        printf("\nEnter the no.: ");
        scanf("%d", &stack[++top]);
    }
}

void display()
{
    if(top==-1)
    	printf("\nEmpty stack (underflow).");
    
    else
    {
    	printf("\n\nStack elements:   ");
        for(int i=0; i<=top; i++)
        {
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}

int main()
{
   
   return 0;
}
