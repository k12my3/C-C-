/*Suppose there is a circle. There are petrol pumps on that circle. Petrol pumps are numbered 0 to (N-1) 
(both inclusive). You have two pieces of information corresponding to each of the petrol pump: (1) the amount of 
petrol that particular petrol pump will give, and (2) the distance from that petrol pump to the next petrol pump.
Initially, you have a tank of infinite capacity carrying no petrol. You can start the tour at any of the petrol pumps.
Calculate the first point from where the truck will be able to complete the circle. Consider that the truck will 
stop at each of the petrol pumps. The truck will move one kilometer for each litre of the petrol. */

#include <stdio.h>
#include <stdlib.h>

typedef struct station
{
    int petrol;
    int dist;
} station_t;

int check_path(station_t *s,int start,int n)
{
    int fuel = 0, i = start;
    while (i < n)
    {
        fuel += s[i].petrol;
        fuel -= s[i].dist;
        if (fuel < 0)
           return 0;
        i++;
        if (start > 0) 
        {
            if (i == start)
               return 1;
            else if (i == n)
                i = 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,rot=-1;
    station_t *s;
    printf("\n\nEnter no. of pumps: ");
    scanf("%d",&n);
    s = malloc(n * sizeof(station_t));
    for (i=0;i<n;i++)
    {
        printf("\nPump-%d: petrol amt. & distance: ", i+1);
        scanf("%d%d", &s[i].petrol, &s[i].dist);
    }
    while (++rot < n) 
    {
        if (check_path(s,rot,n))
            break;
    }
    printf("\nOptimal pump to start the tour -> pump-%d\n", rot+1);
    free(s);
    return 0;
}