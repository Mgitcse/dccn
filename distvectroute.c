#include<stdio.h>
#define INF 99
struct node
{
 unsigned dist[20];
 unsigned from[20];
}rt[10];
int main()
{
 int costmat[20][20];
 int nodes,i,j,k,count=0;
 printf("\n enter the number of nodes");
 scanf("%d",&nodes);
 printf("\n enter the cost matrix \n");
 for(i=1;i<=nodes;i++)
  for(j=1;j<=nodes;j++)
   {
    scanf("%d",&costmat[i][j]);
    if(costmat[i][j]==0)
     costmat[i][j]=INF;
    rt[i].dist[j]=costmat[i][j];
    rt[i].from[j]=j;
   }
 do{
 for(i=1;i<=nodes;i++)
  for(j=1;j<=nodes;j++)
   if(i==j)
   {
    rt[i].dist[j]=0;
    rt[i].from[j]=i;
   }
  else
   for(k=1;k<=nodes;k++)
    if(rt[i].dist[j]>costmat[i][k]+rt[k].dist[j])
    {
     rt[i].dist[j]=costmat[i][k]+rt[k].dist[j];
     rt[i].from[j]=k;
    }
 }while(++count!=nodes);
   for(i=1;i<=nodes;i++)
   {
    printf("\n------\n");
    printf("\n router %d routing table \n",i);
    printf("\n------\n");
    for(j=1;j<=nodes;j++)
    {
     printf("\t\n tonode %d via %d distance %d",j,rt[i].from[j],rt[i].dist[j]);
    }
  }
printf("\n");
}

