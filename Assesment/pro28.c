// program to calculate the distance between two point.
#include<stdio.h>
int power(int,int);
#include<math.h>
double distance (double,double,double,double);
int main()
{
	double x1,x2,y1,y2;
	printf("Entre the firt coordinates(x1,y1) :");
	scanf("%ld%ld",x1,y1);
	printf("Entre the second coordinates(x2,y2)");
	scanf("%ld%ld",x2,y2);
	printf("Distance between (%ld,%ld) and (%ld,%ld) is %ld.\n",x1,y1,x2,y2,distance(x1,y1,x2,y2));
	return 0;
}
double distance(double x1,double y1,double x2,double y2) 
{
	return (sqrt(power(abs(x1-x2),2) + power(abs(y1-y2),2)));
}
int power(int num,int pow1)
{
	int po=1,i;
	for(i=0; i<num; i++)
		po = po*num;
	return po;
}
