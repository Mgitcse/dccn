#include <stdio.h>
#include <string.h>
int a[30];
void rev_str(int a[]);
int main()
{
    int i,k,l,j,c,e=0;
    int r[5],b[30],s[7];
    printf("enter the data word;");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    rev_str(a);
    r[0]=0;r[1]=0;r[2]=0;
    r[0]=((a[0]+a[1]+a[2])%2);
    r[1]=((a[1]+a[2]+a[3])%2);
    r[2]=((a[3]+a[0]+a[1])%2);
    rev_str(a);
    l=2;j=4;
    while(l>=0)
    {
        a[j]=r[l];
        l=l-1;
        j=j+1;
    }
    for(i=0;i<7;i++)
    printf("%d",a[i]);
    printf("\nif you want to change the code word 1.Yes or 2.No:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:printf("enter the received code word:");
                for(i=0;i<7;i++)
                {
                    scanf("%d",&b[i]);
                }
                for(i=0;i<7;i++)
                {
                    if(a[i]!=b[i])
                    {
                     e=e+1;
                    }
                }
                if(e>1)
                {
                    printf("more than 2 errors can't corrected");
                }
                else{
                s[2]=((b[1]+b[2]+b[3]+b[6])%2);
                s[1]=((b[0]+b[1]+b[2]+b[5])%2);
                s[0]=((b[0]+b[2]+b[3]+b[4])%2);
                if(s[0] == 0 && s[1] == 0 && s[2] == 0)
                printf("No error");
                else if(s[0] == 0 && s[1] == 0 && s[2] == 1)
                k=7;
                else if(s[0] == 0 && s[1] == 1 && s[2] == 0)
                k=6;
                else if(s[0] == 0 && s[1] == 1 && s[2] == 1)
                k=1;
                else if(s[0] == 1 && s[1] == 0 && s[2] == 0)
                k=4;
                else if(s[0] == 1 && s[1] == 0 && s[2] == 1)
                k=3;
                else if(s[0] == 1 && s[1] == 1 && s[2] == 0)
                k=0;
                else if(s[0] == 1 && s[1] == 1 && s[2] == 1)
                k=2;
                printf("\nerror is at %d:",k);
                if(b[k]==0)
                b[k]=1;
                else
                b[k]=0;
                printf("\ncorrected code word is:");
                for(i=0;i<7;i++)
                printf("%d",b[i]);
                }
                break;
        case 2:printf("no error,extraction should be done");
                break;
    }
}
void rev_str(int b[])
{
    int i,j=3,c[20];
    for(i=0;i<4;i++)
    {
        c[i]=b[i];
    }
    for(i=0;i<4;i++)
    {
        a[i]=c[j];
        j=j-1;
    }
}
