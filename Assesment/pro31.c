//WAP to search element in array using 'LINEAR SEARCH'.
#include<stdio.h>
int main()
{
	int arr[10],i,num,flag=1;
	printf("Entre the  element of array :");
	for(i=0; i<10; scanf("%d",&arr[i]),i++);
	printf("Entre the element to which search in array : \n");
	scanf("%d",&num);
	for(i=0; i<10; i++)
	{
		if(num == arr[i])
		{
			flag=0;
			break;
		}
	}
	if(flag == 0)
		printf("%d is found.\n",num);
	else
		printf("%d is not found.\n",num);
	return 0;
}
