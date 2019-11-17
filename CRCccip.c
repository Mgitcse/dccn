#include<stdio.h>
int xor(int i,int j)
	{
		if(i==j)
		return 0;
		return 1;
	}
int main()
	{
		int G[]={1,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,1},i,m,j;
		printf("Enter the size of M\t");scanf("%d",&m);
		int M[m+16],code[m+16];
		printf("Enter M\n");
		for(i=0;i<m;i++)
			{
				scanf("%d",&M[i]);
				code[i]=M[i];
			}		

		for(i=m;i<16+m;i++)
			M[i]=0;

		for(i=0;i<m;i++)
			{
				if(M[i]==1)
					{
						for(j=0;j<17;j++)
							{
								if(xor(M[i+j],G[j])==0)
									M[i+j]=0;
								else
									M[i+j]=1;	
							}
					}	
			}	
		for(i=4;i<m+16;i++)
			code[i]=M[i];	
	
		printf("Code word is:\t");
		for(i=0;i<m+16;i++)
			printf("%d ",code[i]);

		printf("\nEnter choice 1.To change 2.Not Change ");
		int c;
		scanf("%d",&c);
		if(c==2)
		printf("Code word is correct Data extracted");
		else
			{
				printf("Enter New M\n");
				for(i=0;i<m+16;i++)
					{
						scanf("%d",&M[i]);
						code[i]=M[i];
					}
		

				for(i=0;i<m;i++)
					{
						if(M[i]==1)
							{
								for(j=0;j<17;j++)
									{
										if(xor(M[i+j],G[j])==0)
											M[i+j]=0;
										else
											M[i+j]=1;
									}
							}
					}
				for(i=4;i<m+16;i++)
				code[i]=M[i];
				
				printf("Remainder is of New Code word is:\t");
				for(i=m;i<m+16;i++)
					printf("%d ",code[i]);
			
			
				printf("\n");
				for(i=m;i<m+16;i++)
   				if(M[i]==1)
      					break;		
				if(i==m+16)		
					printf("Data Word is extracted code word is correct");
				else
					printf("Data Word is not code word is incorrect");
		     
                       }


		printf("\n");
}
