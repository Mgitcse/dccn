#include<stdio.h>
int main()
{

	int i,j,z,n;0
	char a[100],b[1000];
	printf("Enter the string: "); scanf("%[^\n]%*c", a);
	n=printf("%s\n\n",a);
	n-=2;
        b[0]='0'; 
	for(i=1;i<7;i++)
		b[i]='1';
        b[7]='0';
	i++;
	for(j=0;j<n;j++)
		{
			if(a[j]=='1')
				{
					for(z=j+1;z<j+5&&n>j+4;z++)
						{
							if(a[z]=='1')
								continue;
							else
								break;
						}
               				}
                   
  
			if(z==j+5)
				{
					for(z=0;z<5;z++,j++,i++)
						b[i]='1';
					b[i]='0';
					i++;
					j--;
				}
			else
				{
					b[i]=a[j];
					i++;
				}
		}
        b[i]='0';
	for(j=i+1;j<i+7;j++)
		b[j]='1';
        i+=7;
        b[i]='0';
	
        
	for(j=0;j<=i;j++)
		printf("%c",b[j]);
	printf("\n\n");
}

