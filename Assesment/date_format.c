#include<stdio.h>

void date_formate(struct time t)
{
	char *month[] = {"january","febuary","march","april","may","june","july","Augest","september","Octber","November","December"};
	char *weak[7]={"SUNDAY","MONDAY","TUSEDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
	int mm_code[]={0,3,3,6,1,4,2,5,0,3,5},cent_code[]={4,2,0,6,4,2,0};
	int yycode,mmcode,centcode,leapcode,temp,count=0,day;
	if(t.yy >= 1752 && t.yy <=2300)  // according to gregorian calender.
	{
		printf("DATE is FOLLOW GREGORIAN CALENDER.\n");
		temp = t.yy;
		while(count < 2)//calculate last two digit of yrs.
		{
			rev = temp % 10;
			dig = dig + rev * 10;//last two digit of yrs.
			temp = temp / 10;
			count++;
		}
		yycode = (dig + (dig / 4)) % 7; //yrs code calculate.
		mmcode = mm_code[t.mm-1];       //mm code calculate.
		centcode = cent_code[temp - 17];// century code calculate.
		leapcode = LEAPYRS(t.yy);       // leap yrs code.
		day = (yycode + mmcode + centcode + t.dd - leapcode) % 7; //weak day code calculation.
		printf("-----DATE IN DIFFERENT FORMATE-------\n")
		printf("DD/MM/YYYY ---- %d / %d / %d .\n",t.dd,t.mm,t.yy);
		printf("DD/MM/YY -------%d / %d / %d .\n",t.dd,t.mm,dig);
		printf("DD/MONTH/YYYY --%d / %s / %d .\n",t.dd,month[t.mm-1],t.yy);
		printf("WEAK -DD/MM/YY--%s - %d / %d / %d .\n",weak[day-1],t.dd,t.mm,t.yy);
	}		
}		
		
	
