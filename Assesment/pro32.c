//WAP to search element in array using binary search.
#include<stdio.h>
int main()
{
	int arr[100],i,j,temp,num,Snum,TOP,MID,LAST,flag=0;
	printf("Entre the lenght of array : \n");
	scanf("%d",&num);
	printf("Entre the array element : \n");
        for(i=0 ;i<num; scanf("%d",(arr+i)), i++);
	//Sorting array using bubble sort.
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
/*	printf("\n----After Sorting-----\n");
        for(i=0; i<num; printf(" %d ",*(arr+i)), i++);*/
	printf("\nEntre the element to which search in array : \n");
	scanf("%d",&Snum);
	//SEARCHING NUMBER.	
	TOP = 0;
	LAST = num-1;
//	MID = (TOP+MID)/2;
	while(TOP <= LAST)
	{	
		MID = (TOP+LAST)/2;
		if(Snum == arr[MID])
		{
			flag=1;
			break;
		}
		else if(Snum > arr[MID])
			TOP = MID+1;
		else
			LAST = MID-1;
	}	
	if(flag == 1)
		printf("%d is found at %d position.\n",Snum,MID+1);
	else
		printf("%d is not found.\n",Snum);
}
