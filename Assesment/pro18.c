//check the number is perfect or not.
#include<stdio.h>
int check_perfect_number(int);
int main()
{
	int num;
	printf("Entre the NUmber :\n");
	scanf("%d",&num);
	if(check_perfect_number(num) == num)
                printf("%d is perfect number.\n",num);
        else
                printf("%d is not perfect number.\n",num);
        return 0;
}

int check_perfect_number(int num)
{
	int i,sum = 1;
	for(i=2; i <= num/2; i++)
		 if(num%i == 0)
			sum = sum + i;
	return sum;
}


