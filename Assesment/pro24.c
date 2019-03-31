//compute average of n-array of float.
#include<stdio.h>
float avrg(float *,int);
int main()
{	float arr[20];
	int i,len;
	printf("Entre the length of array : ");
	scanf("%d",&len);
	printf("Entre the %d array element :\n ",len);
	for(i=0; i<len; i++)
		scanf("%f",&arr[i]);
	printf("Average of %d array element is %f.\n",len,avrg(arr,len));
	return 0;
}
float avrg(float *arr,int len)
{
	if(len == 0)
		return arr[len];
	else
	{
		//printf("%d\n",len);
		return ((avrg(arr,len-1) * (len-1) + arr[len-1]) / len) ;
	}
}
