#include<stdbool.h>
#define LEAPYRS(yy) (yy % 4 == 0) && (!(yy % 100) == 0 || (yy % 400) == 0)
bool Date_valid(int dd,int mm,int yy)
{
	if(yy < 45 || yy > 2300)
		return 0;
	else if (mm < 1 || mm > 12)
		return 0;
	else if(dd < 1 || dd > 31)
		return 0;
	else
	{
		if(mm == 2)
		{
			if(LEAPYRS(yy))
			{
				if(dd <= 29)
					return 1;
				else
					return 0;
			}
			else
			{
				if(dd <= 28)
					return 1;
				else
					return 0;
			}
		}
		else if (mm == 9 || mm == 4 || mm == 6 || mm == 11)
		{
			if(dd <= 30)
				return 1;
			else
				return 0;
		}
		else
		{
			if(dd <= 31)
				return 1;
			else
				return 0;
		}
	}
}
