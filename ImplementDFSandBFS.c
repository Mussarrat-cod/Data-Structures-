#include<stdio.h>
#include<stdlib.h>

void BFS(int [20][20], int , int[20],int);
void DFS(int[20][20],int , int [20], int);

int main()
{
    int a[20][20], source, n, visited[20], i,j;
    printf("Enter number of nodes");
    scanf("%d",&n);
    printf("Enter adjacency matrix");
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        visited[i]=0;
    }
    printf("Enter source node");
    scanf("%d",&source);
    visited[source]=1;
    
    BFS(a,source,visited,n);
    for(i=1;i<=n;i++)
    {
        if(visited[i]!=0)
        {
            printf("Node %d is reachable\n", i);
        }
        else
        {
            printf("Node %d NOT REACHABLE\n", i);
        }
    }
    
    DFS(a,source,visited,n);
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            printf("GRAPH NOT CONNECTED");
            exit(0);
        }
      
    }
    
            printf("Graph Connected");
        
    
}

void BFS(int a[20][20], int source, int visited[20], int n)
{
    int queue[10],f,r,u,v;
    f=0;
    r=-1;
    queue[++r]=source;
    while(f<=r)
    {
        u=queue[f++];
        for(v=1;v<=n;v++)
        {
            
            if(a[u][v]==1 && visited[v]==0)
            {
                queue[++r]=v;
                visited[v]=1;
            }
        }
    }
}

void DFS(int a[20][20], int u, int visited[20],int n)
{
    int v;
    printf("Visisted %d",u);
    visited[u]=1;
    for(v=1;v<=n;v++)
    {
        if(a[u][v]==1 && visited[v]==0)
        {
            DFS(a, u, visited,n);
        }
    }
}
