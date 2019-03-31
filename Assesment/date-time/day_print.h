#include<stdio.h>
#include<string.h>
void day_print(int dd,int mm,int yy)
{
	int month[12] = {1,4,4,0,2,5,0,3,6,1,4,6},day,i;
	char *weak[7]={"SUNDAY","MONDAY","TUSEDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
	
	printf("%d %d %d ",dd,mm,yy);
	
	day = dd + month[mm-1] + (yy - 1900) + (yy - 1900)/4;
	//printf("\n%d\n",day);
	day = day%7;
	//printf("\n%d\n",day);
	//gets(weak[day-1]);
	if(day == 0 || day == 7)
		printf(" \n%s - %d / %d / %d.\n",weak[6],dd,mm,yy);
	else	
	        printf(" \n%s - %d / %d / %d.\n",weak[day-1],dd,mm,yy);
}

