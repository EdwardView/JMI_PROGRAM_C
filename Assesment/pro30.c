#include<stdio.h>
int main()
{
	int sale_p_gs[100],i,sal_p;
	float salary[100];
	printf("Entre the total number of salesperson : \n");
	scanf("%d",&sal_p);
	
	printf("Entre the saleperson gross sale of last weak : \n");
	
	for(i=0; i<sal_p; printf("saleperson %d gross sale.\n",i+1),scanf("%d",&sale_p_gs[i]),i++);
	
	printf("--Gross sale\tsaleperson salary----\n ");
	
	for(i=0 ; i<sal_p; salary[i]=(((float)sale_p_gs[i]*9)/100 + 1000),i++);
	
	for(i=0; i<sal_p;   printf("-- %d \t %f----\n",sale_p_gs[i],salary[i]),i++);
	
	return 0;
}

	
