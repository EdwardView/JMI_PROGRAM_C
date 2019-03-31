#include<stdio.h>
#define help for(i=0; i<5; i++)\
		printf("%d",i);
#define HELP(num,i)  for(j=0; j<i; i++)\
		     	    pro1 = pro1*num;
int main()
{
	int i = 3,pro1=1,j,num = 3;
	help
	HELP(num,i);
	printf(" \n%d ",pro1);
	return 0;
}
	
