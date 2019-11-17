#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/stat.h>
int main()
{
char buff[30];
int fd;
if(mkfifo("f1",0666)<0)
printf("\nERROR\n");
while(1)
{
fd=open("f1",1);
scanf("%[^\n]%*c",buff);
write(fd,buff,sizeof(buff));
}
}

