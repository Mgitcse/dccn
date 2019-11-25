#include<stdio.h>
#include<stdlib.h>
int xor(int,int);
void main()
{
    int ch=0,k,i,j,sw,temp[50],n,g,a[30],b[30],c[20],r[30],ma[30];
    printf("enter length of dataword");
    scanf("%d",&n);
    printf("enter the dataword");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]); c[i]=a[i];
    }
    printf("enter the length of generator");
    scanf("%d",&g);
    printf("enter the generator");
    for(i=1;i<=g;i++)
    {
        scanf("%d",&b[i]);
       
    }
    for(i=n+1;i<=n+g-1;i++)
    c[i]=0;
    for(i=1;i<=n+g-1;i++)
    temp[i]=c[i];
    for(i=1;i<=n;i++)
    {
        k=i;
        if(c[i]==1)
        {
            for(j=1;j<=g;j++)
           
            {
                c[k]=xor(c[k],b[j]);
                k++;
            }
        }
    else
    {
        for(j=1;j<=g;j++)
        {
            c[k]=xor(c[k],0);
            k++;
        }
    }
   
    }
    for(i=1;i<=n+g-1;i++)
    {
        ma[i]=c[i]+temp[i];
        printf("%d",ma[i]);
    }
    printf("if you want to change 1.yes \n or 2. no ");
    scanf("%d",&sw);
    switch(sw)
    {
        case 1:printf("enter the recieved codeword");
        for(i=1;i<n+g-1;i++)
        scanf("%d",&r[i]);
        for(i=1;i<=n;i++)
    {
        k=i;
        if(c[i]==1)
        {
            for(j=1;j<=g;j++)
           
            {
                r[k]=xor(r[k],b[j]);
                k++;
            }
        }
    else
    {
        for(j=1;j<=g;j++)
        {
            r[k]=xor(c[k],0);
            k++;
        }
    }
   
    }
    for(i=1;i<=n+g-1;i++)
    if(r[i]==0)
    {
        ch++;
    }
    if(ch==n+g-1)
    printf("no errors can be extracted");
    else
    printf("errored codeword");
    break;
    case 2:printf("as same codeword recieved dta ca be extracted");
    break;
    }
    }
    int xor(int a,int b)
    {
        if(a==0 &&b==0||a==1 && b==1)
        return 0;
        else
        return 1;
    }
