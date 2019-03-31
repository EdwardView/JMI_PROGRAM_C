#include<stdio.h>
int main()
{
	int i,j,count=1;
	printf("----PASCAL TRIANGLE-------\n");
/*	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%2==0)
			{
				if(j%2==0)
					printf("1");
				else
					printf("0");
			}
			else
			{	
				if(j%2==0)
					printf("0");
				else
					printf("1");
			}
		}
		printf("\n");
	}*/
	for(i=1; i<=5; i++)
	{
		count=i;
		for(j=5; j>=i; j--)
			printf(" ");
		for(j=1; j<=i; j++)
			printf("%d",count++);
		count=i;
		for(j=i; j>1; j--)
			printf("%d",count--);
	printf("\n");
	}
	return 0;
}

