#include<stdio.h>
int visit[20],n,adj[20][20],s,count=0;

void dfs(int v)
{
  int w;
  visit[v]=1;
  count++;
  for(w=1;w<=n;w++)

    if((adj[v][w]==1) && (visit[w]==0))
      dfs(w);
}




void main()
{
  int v,w;
  printf("Enter the no.of vertices:");
  scanf("%d",&n);

  printf("Enter the adjacency matrix:\n");
  for(v=1;v<=n;v++)
    for(w=1;w<=n;w++)
      scanf("%d",&adj[v][w]);

  for(v=1;v<=n;v++)
      visit[v]=0;

    dfs(1);

  if(count==n)
   printf("\nThe graph is connected");
  else
   printf("The graph is not connected");
}




