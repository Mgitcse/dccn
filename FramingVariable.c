#include<stdio.h>
int main()
{
	int fs;
	char strs[100]; 
	printf("Enter the string\n");        
	int d=scanf("%[^\n]%*c", strs);
	printf("%d\n",d);       
	int n=printf("Entered string is %s\n",strs);
	n=n-19;
        int y=0;
        int ary[100];
        int r=0;
        while(y<=n)
	{
	printf("Enter the frame size\n");
	scanf("%d",&fs);
        ary[r]=y;
	r++;        
	y+=fs;
        }	
	int z=1;
	for (int i=0;i<n;i=i+fs,z++)
	{
		printf("Frame No: %d\t",z);
		for (int j=i;j<(i+fs);j++)
			printf("%c",strs[j]);
		printf("\n");
	}
}
