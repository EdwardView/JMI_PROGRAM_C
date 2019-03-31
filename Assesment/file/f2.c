#include<stdio.h>
#include<stdlib.h>
void deleteItem(int);
struct items
{
	char itemname[25];
	int itemcode,itemquantity; 
};
struct items I;
int main()
{
	FILE *fp;
	int i,icode;	
	char ch;
	fp = fopen("inventory.txt","wb");
	if(fp == NULL)
	{
		printf("Unable to open FILE.\n");
		exit(1);
	}
	            //ENTRY of items.
	while(1)
	{
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

		//inventory deletion..	
	printf("ENTRE THE ITEM CODE TO WHICH DELETE ITEMS:\n");
	scanf("%d",&icode);
	deleteItem(icode);

	//printf inventory after deletion....
	
	fp = fopen("inventory.txt","rb");
	jif(fp ==NULL)
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


void deleteItem(int icode)
{
	FILE *temp1,*temp2;
	int i;
	temp1 = fopen("inventory.txt","rb");	
	temp2 = fopen("tempFile.txt","wb");	
	if(temp1 == NULL && temp2 == NULL)
	{
		printf("Unable open to file");
		exit(1);
	}
	while(fread(&I,sizeof(I),1,temp1) > 0)
	{
		if(icode != I.itemcode)
		     fwrite(&I,sizeof(I),1,temp2);
	}
	fclose(temp1);
	fclose(temp2);
	remove("inventory.txt");
	rename("tempFile.txt","inventory.txt");	
}		
	




























