#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,yy,month[12] = {1,4,4,0,2,5,0,3,6,1,4,6},day,mmi;
	char mm[10],*weak[7]={"SUNDAY","MONDAY","TUSEDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
	printf("Entre the month name : ");
	scanf("%s",mm);
	printf("Entre the years :");
	scanf("%d",&yy);
	switch(mm)
	{
		case jan :
				mmi=1;
				break;
		case feb :
				mmi=2;
				break;
		case mar :
				mmi=3;
				break;
		case apr :
				mmi=4;
				break;
		
	if(yy < 1900 || yy > 9999)
	{
		printf("---Invalid year--");
		return 0;
	}
	else
	{
		for(i=0; i<57; printf("-"),i++);
		for(i=0,putchar('\n'); i<7; printf("%s ",weak[i]),i++);
		day = 1 + 
	}
	return 0;
}
		
