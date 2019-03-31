#include<stdio.h>
int GCD(int,int);
float lcm(float,float);
struct rational
{
	float num,deno;
};
int main()
{
	struct rational r1,r2;
	float Lcm,add,temp1,temp0;

	printf("Enter the first ratinal number : \n");
	scanf("%f%f",&r1.num,&r1.deno);

	printf("Entre the second rational number :\n");
	scanf("%f%f",&r2.num,&r2.deno);	
	
	if(r1.deno == 0 || r2.deno == 0)
		printf("Arthimatics operation is not allowed.\n");
	else
	{
		Lcm = lcm(r1.deno,r2.deno);
		//printf("\n%f\n",Lcm);		

		temp0 = ((Lcm / r1.deno) * r1.num) + ((Lcm / r2.deno) * r2.num);//Addition of rational number		
//		printf("\\n%f\n",temp0);
		temp1 = GCD((int)temp0,(int)Lcm); // HCF of two number.
//		printf("\n %f\n ",temp1);
		
		printf("Addtition : %.0f / %.0f.\n",temp0/temp1,Lcm/temp1); //simplest form of rational number.
		
		temp0 =((Lcm / r1.deno)* r1.num) - ((Lcm / r2.deno) * r2.num); //Substraction of rational number.
		
		temp1 = GCD((int)temp0,(int)Lcm); //HCF of numbers.
		
		printf("Substraction : %.0f / %.0f.\n",temp0/temp1,Lcm/temp1);
		
		temp1 = GCD((int)(r1.num*r2.num),(int)(r1.deno*r2.deno));
	
		printf("Multiplcation : %.0f / %.0f.\n",(r1.num*r2.num)/temp1,(r1.deno*r2.deno)/temp1);
		
		temp1 = GCD((int)(r1.num * r2.deno),(int)(r1.deno * r2.num));

		printf("Division : %.0f / %.0f.\n",(r1.num*r2.deno)/temp1,(r1.deno*r2.num)/temp1);	
	}
	return 0;
}
int GCD(int n1,int n2)
{
	if (n2 == 0)
		return n1;
	else
		return GCD(n2,n1%n2);
}
float lcm(float n1,float n2)
{
	return (n1*n2)/GCD(n1,n2);
}

