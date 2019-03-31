#include<stdio.h>
#include"Valid_date_f.h"
#include<stdbool.h>
bool Date_valid(int,int,int);
int main()
{
	int dd,mm,yy,month[12] = {1,4,4,0,2,5,0,3,6,1,4,6},day,i;
	char *weak[7]={"SUNDAY","MONDAY","TUSEDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
	
	printf("Entre the date(dd/mm/yy):\n");	
	scanf("%d%d%d",&dd,&mm,&yy);

	printf("DATE is -- %d / %d / %d \n",dd,mm,yy);

	if(Date_valid(dd,mm,yy))
	{
		for(i=0; i<7; printf("##########"),i++);
		for(i=0; i<7; printf("%s\t",weak[i]),i++);
		day = 1 + month[mm-1] + (yy - 1900) + (yy - 1900)/4;
		//printf("---DATE IS VALID---\n");
	}
	else
		printf("---DATE IS INVALID----.\n");
	return 0;

}
