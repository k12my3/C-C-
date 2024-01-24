//DNP EXP-7 

#include <stdlib.h>
#include <stdio.h>
#define MAX_NODES 50
#define False 0
#define True 1
struct Node
{
    int nodeIndex;
    int distance;
    int nextIndex;
};
typedef struct  Node Node;

void dijkstraAlgorithm(int nodes, int src, int (*lsdb)[nodes])
{
    int x,y,v;
    int i,j;
    int tempDistance,shortestDistance;
    Node routingTable[MAX_NODES];

    short int shortestPathTree[nodes];
    int notInShortestPathTreeCount=0;
    int dist[nodes];
    x=src;
    for(i=0;i<nodes;i++)
    {
        shortestPathTree[i]=False;
	    dist[i]=lsdb[x][i];	
    }    
    shortestPathTree[src]=True;

    for(j=0;j<nodes;j++)
    {
        routingTable[j].nodeIndex=j;
	    routingTable[j].distance=lsdb[x][j];
	    routingTable[j].nextIndex=-1;
    }

    while(notInShortestPathTreeCount < nodes-1)
    {
        y = routingTable[j].nextIndex; //?
	    shortestDistance=999; //find node w/ shortest distance
	    for (i = 0; i < nodes; i++)
        {
            if (dist[i] < shortestDistance && !shortestPathTree[i]) 
            {
                shortestDistance = dist[i];
                routingTable[j].nextIndex=i;
            }
        }
	    shortestPathTree[y]=True; //visited[nextnode] -> true
	    notInShortestPathTreeCount++;
	    for(v=0;v<nodes;v++)
        {
		    y=routingTable[j].nextIndex;
			for(v=0;v<nodes;v++)
            {
				tempDistance=lsdb[x][v]<(lsdb[x][y]+lsdb[y][v])?lsdb[x][v]:(lsdb[x][y]+lsdb[y][v]);
				if(tempDistance<cm[x][v])
                {
					routingTable[v].nodeIndex=v;
					routingTable[v].distance=tempDistance;
					routingTable[v].nextIndex=y;
					lsdb[x][v]=tempDistance;
				}
                routingTable[v].distance = tempDistance;
			}
	    }				
    }

    printf("routing table of node: %d\n", x);
    for(j=0; j<nodes; j++)
    {
	    printf("%d, %d, %d\n",routingTable[j].nodeIndex,routingTable[j].distance,routingTable[j].nextIndex);
    }
}