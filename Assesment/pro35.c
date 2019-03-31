//WAP to sort the array using BUBBLE sort technique.
#include<stdio.h>
int main()
{
	int arr[100],i,j,temp,num;
	printf("Entre the length of array : \n");
	scanf("%d",&num);
	printf("Entre the array element : \n");
	for(i=0 ;i<num; scanf("%d",(arr+i)), i++);
	printf("---Befor sorting ---\n");
	for(i=0; i<num; printf(" %d ",*(arr+i)), i++);      
        
	//sorting array .
	i=0;
	while(i<num-1)
	{
		j=0;
		while(j<num-1)
		{
			if(arr[j] > arr[j+1])
			{	
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			j++;
		}
		i++;
	}//sorting end.
	printf("\n----After Sorting-----\n");
        for(i=0; i<num; printf(" %d ",*(arr+i)), i++);      
        //sorting array .
	return 0;
}
