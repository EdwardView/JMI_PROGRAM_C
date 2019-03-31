#include<stdio.h>
#include<stdlib.h>
struct item
{
	char itemname[50];
	int itemcode,quantity;
};
int main()
{
	struct item I[10];
	FILE *fp,*temp;
	int i;
	fp = fopen("inventory.txt","wb");
	if(fp == NULL)
	{
		printf("Error to open file.\n");
		exit(1);
	}
	for(i=0; i<10; i++)
	{
		printf("ENTRE THE ITEMS NAME,CODE<QUANTITY :\n");
		scanf("%s%d%d",I[i].itemname,&I[i].itemcode,&I[i].quantity);
	}
		
	fwrite(I,sizeof(I[0]),1,fp);	
	fclose(fp);
	fp = fopen("inventory.txt","rb");
	i=0;
	while(fread(I,sizeof(I[0]),10,fp) > 0)
	{
		printf("ITEAM NAME %s\n ",I[i].itemname);
		printf("ITEM CODE %d\n ITEM QUANTITY %d \n",I[i].itemcode,I[i].quantity);
		i++;
	}
	fclose(fp);
	return 0;
}
	
	

