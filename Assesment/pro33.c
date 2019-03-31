//WAP to count the occurece of number in array.
#include<stdio.h>
void freq(int *,int);
void selectionSort(int *,int);
int main()
{
	int arr[100],i,j,temp,num,count=0;
	printf("Entre the length of array :");
	scanf("%d",&num);
	printf("Enter the array element : \n");
	for(i=0; i<num; scanf("%d",&arr[i]),i++);
//	selectionSort(arr,num);
	for(i=0; i<num; printf("%d ",arr[i]),i++);
	i=0;
/*	while(i < num-1)
	{
		count=1;
		while(arr[i] == arr[i+1])
		{
			i++;
			count++;
		}
		i++;
		printf("\n%d is %d time.\n",arr[i-1],count);
	}*/
	freq(arr,num);
//	for(i=0; i<num; printf("\n%d ",arr[i]),i++);

	return 0;
}
/*void selectionSort(int *arr,int num)
{
	int i,j,temp;
	for(i=0; i<num; i++)
	{
		for(j=0; j<num; j++)
		{
			if(*(arr+i) > *(arr+j))
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}*/
		
void freq(int *arr,int len)
{
	int i=0,count=1,j;
	while(i < len-1)
	{
		count=1;
		if(arr[i] != '@')
		{
			j=i+1;
			while(j < len)
			{
				if(arr[i] == arr[j])	
				{
					arr[j] = '@';
					count++;
					j++;
					continue;
				}
				j++;
			}
			printf("\n%d is %d times.\n",arr[i],count);
		}
		i++;		
	}
}


