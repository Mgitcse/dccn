#include<stdio.h>
int main()
{
	int i,j,z,n;
	char a[100],b[1000],c[]={'D','L','E','S','T','X'},d[]={'D','L','E','E','T','X'};
	printf("Enter the string: "); scanf("%[^\n]%*c", a);
	n=printf("%s\n\n",a);
	n-=2;

	for(i=0;i<6;i++)
		b[i]=c[i];

	for(j=0;j<n;j++)
		{
			if(a[j]==c[0]||a[j]==c[0]+32)
				{
					for(z=j+1;z<j+3&&n>j+2;z++)
						{
							if(a[z]==c[z-j]||a[z]==c[z-j]+32)
								continue;
							else
								break;
						}
				}
			if(z==j+3)
				{
					for(z=0;z<3;z++,i++)
						b[i]=c[z];
					for(z=0;z<3;z++,j++,i++)
						b[i]=a[j];
					j--;
				}
			else
				{
					b[i]=a[j];
					i++;
				}
		}

	for(j=i,z=0;j<i+6;j++,z++)
		b[j]=d[z];
	i+=6;
	for(j=0;j<i;j++)
		printf("%c",b[j]);
	printf("\n\n");
}
