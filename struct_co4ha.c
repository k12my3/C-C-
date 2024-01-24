
/* A class teacher has student’s data and their ranks in CO1. He wishes to prepare a seating plan for them according to their
 ranks. He does this by placing the first ranker in last bench and second ranker in the last before one position. Write a C 
 program to perform this accepting data of 10  and using structure to store student number and rank as a list */

#include <stdio.h>
#include <stdlib.h>

struct stud
{
    int id;
    int rank;
};

int main()
{
    int n;
    printf("\nEnter no. of students: ");
    scanf("%d", &n);
    struct stud st[n], temp;
    printf("\n\nEnter students\' details:\n");
    for(int i=0; i<n; i++)
    {
        printf("\nStudent-%d) Enter ID and Rank : ", i+1);
        scanf("%d%d", &st[i].id, &st[i].rank);
    }
    printf("\n\nSeating Plan:");
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; i<n; j++)
        {
            if(st[i].rank < st[j].rank)
            {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
        printf("\nStd-%d: %d", i+1, st[i].id);
    }
    return 0;
}