#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int n;
int rfd;
char buff[30];
while(1)
{
rfd =open("f1",0);
n=read(rfd,buff,sizeof(buff));
buff[n]='\0';
printf("%s\n",buff);
}
}
