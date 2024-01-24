
#include<stdio.h>
int top=-1,stack[20],arr[20][20],visited[20]={0};
void push( int item )
{
    if ( top == 19 )
        printf( "Stack overflow " );
    else
        stack[ ++top ] = item;
} 

int pop()
{
    int k; 
    if ( top == -1 )
        return ( 0 );
    else
        {  k = stack[ top-- ];
            return ( k );
        }
}

void dfs(int s,int n)
{
   int k,i;
   push(s);
   visited[s]=1;
   k=pop();
   if(k!=0) printf("%d",k);
   while(k!=0)
    {
     for(i=1;i<=n;i++)
	{
       	if((arr[k][i]!=0)&&(visited[i]==0))
	 {
	  push(i);
	  visited[i]=1;
	 }
	k=pop();
	if(k!=0) printf("%d",k);
	}
    }
    for(i=1;i<=n;i++)
     {
	if(visited[i]==0) 
	   dfs(i,n);
     }
}
void main()
{
	int i,j,n,ch,s;
	printf("Enter the Number of Verticesn");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {
	   for(j=1;j<=n;j++)
	    {
	      printf("Enter 1 if %d has a node with %d else 0n",i,j);
	      scanf("%d",&arr[i][j]);
	    }
	 }
	for(i=0;i<=n;i++){visited[i]=0;}
	dfs(s,n);
}

/*#include<stdio.h>
 void DFS(int);
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]
 
void main()
{
    int i, j;
    printf ("Enter number of vertices:");
   scanf ("%d",&n);
     //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
	scanf("%d",&G[i][j]);
     //visited is initialized to zero
   for(i=0;i<n;i++)
       visited[i]=0;
  DFS(0);
}
 
void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}*/
