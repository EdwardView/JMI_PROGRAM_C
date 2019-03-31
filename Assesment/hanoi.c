#include<stdio.h>
void hanoi(int,int *,int *,int *);
int main()
{
	int disk,sor[5],dest[5],aux[5],i;
	printf("Entre the value in hanoi : ");
	for(i=0; i<2;i++)
		scanf("%d",&sor[i]);
	hanoi(2,&sor,&aux,&dest);
	printf("---SOURCE AND DESTINATIO---\n");
	for(i=0; i<2; i++,puts('\n'))
		printf("%d\t%d",sor[i],dest[i]);
	return 0;
}
void hanoi(int disk,int *sor,int *dest,int *aux)
{	
	int i;
	if(disk == 1)
	{
		for(i=0; i<2; i++)
			dest[i] = sor[i];
		return;
	}
	else
	{
		hanoi(disk-1,sor,dest,aux);
		for(i=0; i<2; i++)
			dest[i]=sor[i];
		hanoi(disk-1,aux,sor,dest);
	}
}
	
