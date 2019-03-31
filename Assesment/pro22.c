//WAP to print fibonacci serise using recursive function.
#include<stdio.h>
void fibonacci(int ,int,int);
int main()
{
	int num,a=0,b=1,c,i;
	printf("Entre the number : \n");
	scanf("%d",&num);
	//for(i=0; i<num; c=a+b,printf(" %d ",c),a=b,b=c,i++);
	fibonacci(num,0,1);	
	return 0;
}	
void fibonacci(int num,int temp1,int temp2)
{
	int temp;
	if (num == 0)
		return;
	else if(num == 1)
	{
		printf(" 1 ");
		return;
	}
	else
	{
		temp = temp1+temp2;
		printf(" %d ",temp);
		fibonacci(num,temp,temp1);
	}
	return;
}
