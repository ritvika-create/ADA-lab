#include<stdio.h>
#include<stdlib.h>
int G[10][10],visited[10],n=0;
void DFS(int v){
  visited[v]=1;
  for(int i=0;i<n;i++)
  if(visited[i]==0&&G[v][i]==1) DFS(i);

}
void main(){
  printf("Enter the number of vertex:\t");
  scanf("%d",&n);
  printf("\nEnter the adjency matrix of graph:\n");
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
    scanf("%d", &G[i][j]);
  }
    for(int i=0;i<n;i++)
        visited[i]=0;
    DFS(0);int found=0;
    for(int i=0;i<n;i++){
      if(visited[i]==0){found=1;}
    }
    if(found==0)printf("\nConnected\n");
    else printf("\nDisconnected\n");
}
