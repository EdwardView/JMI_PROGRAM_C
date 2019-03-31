#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[10][10],ch;
	int i;
	fp = fopen("para1.txt","wb");
	if(fp == NULL)
	{
		printf("Unable to open file.\n");
		exit(1);
	}
	printf("ENtre the paragraph :\n");
	for(i=0; i<10; i++)
		gets(str[i]);
	fwrite(str,sizeof(str),1,fp);
	fclose(fp);
	fp = fopen("para1.txt","rb");
	if(fp == NULL)
	{
		printf("Unable to open file");
		exit(1);	
	}
	printf("FILE DATA.\n");
	while(fread(str,sizeof(str),10,fp) > 0)
	{
		for(i=0; i<10; i++)
			puts(str[i]);
	}
	fclose(fp);
	return 0;
	
}
