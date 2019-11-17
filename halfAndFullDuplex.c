#include<stdio.h>

int main()
{
	int n,m,p,ch;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	printf("Enter your choice\n1. Half Duplex \t2.Full Duplex\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			m=n*(n-1)/2;
			printf("Half Duplex link %d\n",m);
			break;
		case 2:
			m=n*(n-1);
			printf("Full Duplex link %d\n",m);
			break;
		default:
			printf("Enter a valid choice\n");
			break;
	}
}
