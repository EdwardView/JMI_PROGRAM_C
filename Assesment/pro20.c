//find the reverse of the number.
#include<stdio.h>
int reverse_num(int);
int main()
{
	int num;
	printf("Entre the number to which find reverse : \n");	
	scanf("%d",&num);
	printf("%d--Reverse--%d.\n",num,reverse_num(num));
	return 0;
}
int reverse_num(int num)
{
	int dig,rev=0,temp;
	temp = num;
	while(temp != 0)
	{
		dig = temp % 10;
		rev = rev*10 + dig;
		temp = temp/10;
	}
	return rev;
}
