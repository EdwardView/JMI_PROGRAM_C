#include<stdio.h>
#include<stdlib.h>

struct items
{
	char itemname[25];
	int itemcode,itemquantity; 
};
struct items I;
int main()
{
	FILE *fp;
	char ch;
	int record=0;	
	fp = fopen("inventory.txt","wb");
	if(fp == NULL)
	{
		printf("Unable to open FILE.\n");
		exit(1);
	}
	            //ENTRY of items.
	while(1)
	{
		printf("Item No. : %d",record++);		
		printf("ENter the items NAME,CODE,QUANTITY : \n ");
		scanf("%s%d%d",I.itemname,&I.itemcode,&I.itemquantity);
		fwrite(&I,sizeof(I),1,fp);
		printf("TO contuine press Y and exit press N\t");
		getchar();
		fflush(stdin);		
		ch = getchar();
		if(ch == 'Y' || ch == 'y')
			continue;
		else
			break;	
	}
	fclose(fp);//close of enrty.

	           //PRINT the all inventory..

	fp = fopen("inventory.txt","rb");
	if(fp ==NULL)
	{
		printf("Unable to open file\n");
			exit(1);
	}
	i=1;
	while(fread(&I,sizeof(I),1,fp) > 0)
	{
		printf("%d\nITEM NAME : \t%s\nITEM CODE : \t%d\nITEM QUANTITIy : \t%d.\n",i,I.itemname,I.itemcode,I.itemquantity);
		i++;
	}
	fclose(fp);

	return 0;
}
void Specfic_items_Access()
{
	FILE *fp;
	long int offset;
	printf("Entre the reco");
	































