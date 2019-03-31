#include<stdio.h>
#include<stdlib.h>
//void fileprint(FILE);
int main()
{
	FILE *fptr; 
	char ch,emp_name[50],emp_code[10]; 
	double bs,gs,med;
	int pf,pro_tax,i;
	fptr = fopen("payslip.txt","w");
	if (fptr == NULL)
	{
		printf("OPENING FILE CONTAING ERRORS.\n");
		exit(1);
	}
	printf("\t\t---Employee PAYSLIP---\n");
	for(i=0; i<40; printf("--"),i++);
	printf("\n\t\tEntre the Employee NAME :");
	scanf("%s",emp_name);
	printf("\n\t\tEntre the Employee Basic salary : ");	
	scanf("%ld",&bs);
	printf("\n\t\tEntre the Employee Medical Allowance :");
	scanf("%ld",&med);
	printf("\n\t\tEntre the employee PF Amount:)");	
	scanf("%d",&pf);
	printf("\n\t\tEntre the employee PROFESSIONAL TAX : ");
	scanf("%d",&pro_tax);
	
	printf("---bs%ld || ma %ld  || pf %d || Pt %d \n\n",bs,med,pf,pro_tax);
	
	fprintf(fptr,"------------Employee PAYSLIP----------\n");
	fprintf(fptr,"   \tEMPLOYEE DETAIL\n");
	fprintf(fptr,"BASIC SALARY :   \t%ld\nMEDICAL ALLOWANCE : \t%ld",bs,med);
	fprintf(fptr,"\nPF AMOUNT :  \t\t%d\nPROFESSIONAL TAX :   \t%d",pf,pro_tax);
	fprintf(fptr,"\nGross total :\t\t%ld\nNET PAY : \t\t%ld.\n",(med + bs),((med + bs) - pf - pro_tax));
	fclose(fptr);


//	fptr = fopen("payslip.txt","r");
//	fileprint(fptr);
//	fclose(fptr);
	return 0;
}
/*void fileprint(FILE fptr)
{
	char ch;
//	fptr = fopen("payslip.txt","r");
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
//	fclose(fptr);
}*/

