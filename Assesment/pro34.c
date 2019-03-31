//WAP to sort the array using selection sorting.
#include<stdio.h>
int main()
{
	int i,j=0,arr[100],temp,num;
	printf("Entre the length of array : ");
	scanf("%d",&num);
	printf("Enter the array element in unsorted manner : ");
	for(i=0; i < num; scanf("%d",&arr[i]),i++);
	// sorting using selection sort.
	{
	i=0;
	while(i<num-1)
	{
		temp = arr[i];
		j = i+1;
		while(j<num)
		{	
			if(temp > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			j++;
		}
		i++;
	}}
			
	printf("---sorted array----\n");
	for(i=0; i<num; printf("%d ",arr[i]),i++);
	return 0;
}		
