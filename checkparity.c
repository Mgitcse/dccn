#include<stdio.h>
int main()
{

	int i,j=0,z,n;
	char a[100];
	int b[100];
	printf("Enter the string: "); scanf("%[^\n]%*c", a);
	printf("Data word: ");
        n=printf("%s\n\n",a);
	n-=2;
        for(i=0;i<n;i++)
		{
			  b[i]=a[i]-48;
        		  if(a[i]=='1')
			  j++;
         	}
        b[i]=j%2;
	n++;
        printf("Code Word: ");
        for(i=0;i<n;i++)
		  printf("%d",b[i]);
        int Y;j=0;
        printf("\n\nDo you want to modify 1. Yes 2. No\n");
        scanf("%d",&Y);
        switch(Y)
        	{
        		  case 2:
				printf("Entered code word is correct and extracted");
        		        break;  
			  case 1:
        		        printf("\nEnter the modified code:   "); 
				scanf("%s",a);
				n=printf("%s\n\n",a);
				n-=2;
				for(i=0;i<n;i++)
				  	  {
						  b[i]=a[i]-48;
      						  if(b[i]==1)
							j++;
        				  } 
          
		
                  		if(j%2==0)
                  		    printf("code word is Correct and data extracted");
                		else
				    printf("code word is wrong, data not extracted");
                		break;
		
         	}
	printf("\n\n");
}

