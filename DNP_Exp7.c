
//dijkstra algo -> c

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
    int shortestDistance,tempDistance;
    Node routingTable[MAX_NODES];

    short int shortestPathTree[nodes];
    int notInShortestPathTreeCount=0;
    int dist[nodes];
    x=src;

    for (i=0;i<nodes;i++)
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

    while(notInShortestPathTreeCount<nodes-1)
    {
        shortestDistance=999;
	    for (i = 0; i < nodes; i++)
            if (dist[i] < shortestDistance && !shortestPathTree[i]) 
            {
                //write the code to find a node with shortest distance
                y=i;
                shortestDistance=dist[i];
            }	
    	    
            shortestPathTree[y]=True;
	        notInShortestPathTreeCount++;
	    for(v=0;v<nodes;v++)
        {
		    if (lsdb[y][v]<999 && shortestPathTree[v]==False)
            {
                //write the code to update the distances of the neighbouring nodes
			    tempDistance=i;
			    routingTable[v].nodeIndex=v;
			    routingTable[v].distance=tempDistance;
			    routingTable[v].nextIndex=y;
		        dist[v]=tempDistance;
		        lsdb[y][v]=tempDistance;
			}
		}				
	}
    
    printf("routing table of node: %d\n",x);   
    for (j=0;j<nodes;j++)
        printf("%d, %d, %d\n",routingTable[j].nodeIndex,routingTable[j].distance,routingTable[j].nextIndex);
}