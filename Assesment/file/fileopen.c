#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr = fopen("payslip.txt","r");
	if (fptr == NULL)
	{
		printf("OPENING FILE CONTAING ERRORS.\n");
		exit(1);
	}
	while(1)
	{
		if((ch=fgetc(fptr)) == EOF)
			break;
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;
}
