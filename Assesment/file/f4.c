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
	int i,icode;	
	char ch;
	fp = fopen("inventory.txt","wb");
	if(fp == NULL)
	{
		printf("Unable to open FILE.\n");
		exit(1);
	}
	printf("");

	
	
