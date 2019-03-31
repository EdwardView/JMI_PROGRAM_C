// GCD of two number
#include<stdio.h>
int GCD(int,int);
int main()
{
	int num1,num2;
	printf("Entre the two number : \n");
	scanf("%d%d",&num1,&num2);
	printf("GCD od %d and %d is %d.\n",num1,num2,GCD(num1,num2));
	return 0;
}
int GCD(int num1,int num2)
{
	if(num2 == 0)
		return num1;
	else
		return GCD(num2,num1%num2);
}
