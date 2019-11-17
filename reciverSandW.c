#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
int main()
{
char buff[20];
int wfd,rfd,n;
while(1)
{
rfd=open("f1",0);
n=read(rfd,buff,sizeof(buff));
buff[n]='\0';
printf("%s\n",buff);
wfd=open("f2",1);
char buff2[]={'A','C','K'};
write(wfd,buff2,3);

}
}
