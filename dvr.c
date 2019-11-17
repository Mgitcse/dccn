#include<stdio.h>
int main()
{
    int graph[50][50];
    int i,j,k,t;
    int n;
 
    printf("\n Enter Number of Nodes:");
    scanf("%d",&n);
 
    /* Initialize graph*/
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            graph[i][j]=-1;
        }
    }
 
    /* Vertex  */
    char ch[7]={'A','B','C','D','E','F','G'};
 
    /* input */
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                graph[i][j]=0;
            }
            if(graph[i][j]==-1)
            {
                printf("\n Enter Distance between %c - %c : ",ch[i],ch[j]);
                scanf("%d",&t);
                graph[i][j]=graph[j][i]=t;
            }
        }
    }
 
    /* Initializing next */
    int next[50][50];
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            next[i][j]=0;
        }
    }
 
    printf("\n After Initialization");
    /* Display table initialization */
    for (i=0;i<n;i++)
    {
        printf("\n%c Table",ch[i]);
        printf("\nNode\tDist\tNext");
        for(j=0;j<n;j++)
        {
            printf("\n%c\t%d\t%d",ch[j],graph[i][j],next[i][j]);
        }
    }
 
    //sharing table
    int sh[50][50][50];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for (k=0;k<n;k++)
            {
                /* Check if edge is present or not*/
                if((graph[i][j]>-1)&&(graph[j][k]>-1))
                {
                    sh[i][j][k]=graph[j][k]+graph[i][j];
                }
                else
                {
                    sh[i][j][k]=-1;
                }
            }
        }
    }
 
    /*displaying shared table */
   /* for(i=0;i<n;i++)
    {
        printf("\n\n For %c",ch[i]);
        for (j=0;j<n;j++)
        {
            printf("\n From %c",ch[j]);
            for(k=0;k<n;k++)
            {
printf("\n %c %d",ch[k],sh[i][j][k]);
            }
        }
    }
     
    /* Updating */
    int final[50][50];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            /* Copy initial value from input graph*/
            final[i][j]=graph[i][j];
            next[i][j]=i;
             
            /*Update them*/
            /* Check condition a - b - c */
            for(k=0;k<n;k++)
            {
                 
                if((final[i][j]>sh[i][k][j]) || (final[i][j] == -1))
                {
                    if(sh[i][k][j]>-1)
                    {
                        final[i][j]=sh[i][k][j];
                        next[i][j]=k;
                    }
                }
            }
            /* After considering three vertex if final not found
                consider 4th
                a- b- c- d
            */
 
            if(final[i][j]==-1)
            {
                for(k=0;k<n;k++)
                {
 
                    if((final[i][k]!=-1)&&(final[k][j]!=-1))
                    {
                        if((final[i][j]==-1) || ((final[i][j]!=-1) &&(final[i][j]>final[i][k]+final[k][j])))
                        {
                            if(final[i][k]+final[k][j]>-1)
                            {
                                final[i][j]=final[i][k]+final[k][j];
                                next[i][j]=k;
                            }
                        }
                    }
                     
                }
            }
        }
    }
 
    printf("\n After Update :");
    /* Display table Updation */
    for (i=0;i<n;i++)
    {
printf("\n %c Table",ch[i]);
        printf("\nNode\tDist\tNext");
        for(j=0;j<n;j++)
        {
   printf("\n%c\t%d\t",ch[j],final[i][j]);
            if(i==next[i][j])
                printf("-");
            else
printf("%c",ch[next[i][j]]);
        }
    }
 return 0;
 printf("\n");
}
