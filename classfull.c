#include<stdio.h>
int main()
{
	int a,i,j,d[30],b[30][30];
	printf("choice the number like 1:decimal & 2.binary");
	scanf("%d",&a);
	switch(a)
	{
	case 1:printf("enter the decimal ip:");
		for(i=1;i<8;i++)
		{
		scanf("%d",&d[i]);
		}
		if(d[1]>=0 && d[1]<128)
			printf("class:A \n mask:/8");
		if(d[1]>=128 && d[1]<192)
			printf("class:B \n mask:/16");
		if(d[1]>=192 && d[1]<224)
			printf(" class:C  \n mask:/24");
		if(d[1]>=224 && d[1]<240)
			printf(" class:D \n mask:no mask value");
		if(d[1]>=240 && d[1]<256)
			printf(" class:E \n mask:no mask value");
		break;
	case 2:
		printf("enter the binary ip:");
		for(i=1;i<=4;i++)
		{
		for(j=1;j<=8;j++)
		{
		scanf("%d",&b[i][j]);
		}
		}
		if(b[1][1]==0)
			printf("class:A \n mask:/8");
		if(b[1][1]==1 && b[1][2]==0)
			printf("class:B \n mask:/16");
		if(b[1][1]==1 && b[1][2]==1 && b[1][3]==0)
			printf("class:C \n mask:/24");
		if(b[1][1]==1 && b[1][2]==1 && b[1][3]==1 &&  b[1][4]==0)
			printf("class:D \n mask:no mask values");
		if(b[1][1]==1 && b[1][2]==1 && b[1][3]==1 && b[1][4]==1)
			printf("class:E \v mask:no mask value");
		break;
}
}


