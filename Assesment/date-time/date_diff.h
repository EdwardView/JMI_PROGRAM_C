#include<stdio.h>
#include"time.h"
struct time date_diff(struct time t1)
{
	struct time temp;
	
	temp.dd = t1.dd;
	temp.mm = t1.mm;
	temp.yy = t1.yy;
	/*if(t1.yy == t2.yy)
	{
		if(t1.mm == t2.mm)
		{
			temp.mm = t1.mm - t2.mm;
			temp.dd = abs(t1.dd - t2.dd);
		}
		else if(t1.mm > t2.mm)
		{
			if(t1.dd > t2.dd)
				temp.dd = t1.dd - t22.dd;
			else
			{
				temp.dd = t1.dd + 30 - t2.dd;
				t1.mm--;
			}
		}

		
	}*/
	return temp;
}
