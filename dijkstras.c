#include<stdio.h>
int main()
{
	int cost[10][10],v[10],dist[10],next[10],path[10];
	int i,j,n,k,m,count,min,s;
	printf("Enter no. of vertices:");
	scanf("%d",&n);
	printf("\nEnter cost matrix:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=99;
		}
	printf("\nEnter the starting vertex:");
	scanf("%d",&m);
	
	for(i=1;i<=n;i++)
	{
		dist[i]=cost[m][i];
		next[i]=m;
		v[i]=0;
	}
	
	dist[m]=0;
	v[m]=1;
	count=1;
	
	for(j=1;j<=n;j++)
	{
		min=99;
		for(i=1;i<=n;i++)
			if(dist[i]<min && !v[i])
			{
				min=dist[i];
				s=i;
			}
		v[s]=1;
		for(i=1;i<=n;i++)
			if(!v[i])
				if(min+cost[s][i]<dist[i])
				{
					dist[i]=min+cost[s][i];
					next[i]=s;
				}
	}
 

	printf("\nCost     Path\n");
	for(i=1;i<=n;i++)
		if(i!=m)
		{
		    k=1;
			printf("%d        ",dist[i]);
			j=i;
			do
			{
				j=next[j];
				path[k++]=j;
			}while(j!=m);
			for(j=k-1;j>=1;j--)
			    printf("%d-",path[j]);
			printf("%d\n",i);
	}
}
