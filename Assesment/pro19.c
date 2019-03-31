//Check number is prime or not between 1 to 10,000.
#include<stdio.h>
int check_prime(int);
int main()
{
	int i,flag;
	printf("Prime Number between 1 to 10,000 is : \n");
	for(i=2; i<=10000; i++)
	{
		flag = check_prime(i);
		if(flag == 1)
			printf("%d is prime number.\t",i);
	}
	return 0;
}
int check_prime(int num)
{
	int i,flag=1;
	for(i=2; i<num/2; i++)
	{
		if(num%i==0)
		{
			flag=0;
			return flag;
		}
	}
return flag;
}
