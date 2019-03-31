//conversion a decimal number to another base.
#include<stdio.h>
//void convert_d_a(int,int);
int convert_decimal(int,int);
void convert_any_to_any(int,int);
int main()
{
	int num,gbase,cbase,dec;
	printf("Entre the  number : ");
	scanf("%d",&num);
	
	printf("Entre the base to which convert : ");
	scanf("%d",&cbase);
//	printf("%d",num);

	//printf("\n%d\n",convert(num,gbase));
	if(cbase == 10)
	{	
		printf("[%d-->(base)10] to [",num);
		convert_any_to_any(num,cbase);
		printf("-->%d(base)]",cbase);
	}
	else
	{
		dec=convert_decimal(num,gbase);
		printf("[%d-->%d(base)] to [%d-->10(base)] to [",num,gbase,dec);
		convert_any_to_any(dec,cbase);
		printf("-->%d(base)]\n",cbase);
	}
	return 0;
}
/*void convert(int num,int gbase,int cbase)
{
	int temp,dec=0,i=0,rem;
	if(gbase != 10)
	{
		temp = num;
		while(temp != 0)
		{
			rem = temp%10;
			dec = rem*power(gbase,i)+dec;
			temp = temp/10;
			i++;
		}
		convert_d_a(dec,cbase);
	}
//	printf("%d decimal to hexa %x\n\n",dec,dec);
	convert_d_a(num,cbase);
}*/
int power(int num1,int num2)
{
	int i,po=1;
	for(i=0; i<num2; i++)
		po = po*num1;
	return po;
}
void convert_any_to_any(int num,int cbase)
{
	int rem = num % cbase;
	if(rem == 0 && num == 0)
		return;
	convert_any_to_any(num/cbase,cbase);
	if(rem >= 10)
		printf("%c",(rem-10+'A'));
	else
		printf("%d",rem);

}
int convert_decimal(int num,int base)
{
	static int i=0;
	int rem = num % 10;
	if(rem == 0 && num == 0)
		return 0;	
	else
	{
		if(rem > 69 && rem < 65)
		
		return rem*power(base,i++)+convert_decimal(num/10,base);
	}
}		
