#include<stdio.h>
#include"Valid_date_f.h"
#include"day_print.h"
struct time 
{
	int dd,mm,yy;
};
int main()
{
	struct time t1,t2;
	
	char ch;
	do 
	{
		printf("Entre the date(dd/mm/yy) : ");
		scanf("%d%d%d",&t1.dd,&t1.mm,&t1.yy);
		printf("%d / %d / %d \n",t1.dd,t1.mm,t1.yy);

		if(Date_valid(t1.dd,t1.mm,t1.yy))
		{
			day_print(t1.dd,t1.mm,t1.yy);		
		}
		else
		{
			printf("Date is invalid.\n");
		}
		printf("To continue press y/Y else n/N\n");
	        getchar();	
		fflush(stdin);	
		scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
	return 0;
}
