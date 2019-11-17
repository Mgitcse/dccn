#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int p,i,j,m,n,k=0,a[30],b[30][30],c[30][30],z[30],res[30][30],res1[30][30],rem=0,dec[10],g=0,M[10],S=0,M1[10],c1[30][30];
printf("enter the address:");
for(i=1;i<=4;i++)
scanf("%d.",&a[i]);
scanf("/%d",&m);
for(i=1;i<=4;i++)
{
n=a[i];
for(j=8;j>=1;j--)
{
if(n%2==0)
{
n=n/2;
b[i][j]=0;
}
else
{
n=n/2;
b[i][j]=1;
}}}
printf("given address in binary:\n");
for(i=1;i<=4;i++)
for(j=1;j<=8;j++)
printf("%d",b[i][j]);
for(i=1;i<=4;i++)
{
for(j=1;j<=8;j++)
{k++;
if(k<=m){
c[i][j]=1;
c1[i][j]=0;
}
else{
c[i][j]=0;
c1[i][j]=1;}
}
}
printf("\nc array");
for(i=1;i<=4;i++)
for(j=1;j<=8;j++)
printf("%d",c[i][j]);
printf("c1 array\n");
for(i=1;i<=4;i++)
for(j=1;j<=8;j++)
printf("%d",c1[i][j]);
for(i=1;i<=4;i++)
for(j=1;j<=8;j++)
{
res[i][j]=b[i][j] & c[i][j];
res1[i][j]=b[i][j] || c1[i][j];
}
printf("\nres\n");
for(i=1;i<=4;i++)
for(j=1;j<=8;j++)
printf("%d",res[i][j]);
printf("\nres1\n");
for(i=1;i<=4;i++)
for(j=1;j<=8;j++)
printf("%d",res1[i][j]);
for(i=4;i>=1;i--)
{
M[i]=0;
M1[i]=0;
S=0;
for(j=8;j>=1;j--)
{
if(res1[i][j]!=0)
{M[i]=M[i]+pow(2,S);}
if(res[i][j]!=0)
{M1[i]=M1[i]+pow(2,S);}
S++;
}
}
printf("\n start:");
for(i=1;i<=4;i++)
printf("%d.",M1[i]);
printf("\nbroadcast:");
for(i=1;i<=4;i++)
printf("%d.",M[i]);
}
