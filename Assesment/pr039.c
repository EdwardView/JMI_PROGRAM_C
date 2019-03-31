//maximun in n array of integer.

	#include<stdio.h>
	int temp;
	void maxR(int *,int);
	int main()
	{
		int i,ar[100],len;
		printf("Enter the length of array :");
		scanf("%d",&len);
		printf("Entre the array element : ");
		for(i=0; i<len; scanf("%d",&ar[i]),i++);
		temp = ar[len-1];
		maxR(ar,len-1);
		printf("%d is maximum in array.",temp);
		return 0;
	}
	void maxR(int *arr,int len)
	{
		if(len == 0)
			return ;
		else
		{
			if(temp < arr[--len])
				temp = arr[len];
			maxR(arr,len); 
		}
	}
