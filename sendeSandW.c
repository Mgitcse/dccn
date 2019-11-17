#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
int main()
{
char buff[20],buff2[30];
int wfd,rfd,n;
if(mkfifo("f2",0666)<0)
printf("\nERROR\n");
if(mkfifo("f1",0666)<0)
printf("\nERROR\n");
else
{
while(1)
{
wfd=open("f1",1);
scanf("%s",buff);
write(wfd,buff,sizeof(buff));
rfd=open("f2",0);
n=read(rfd,buff2,sizeof(buff2));
buff2[n]='\0';
printf("%s\n",buff2);
}
}
}
