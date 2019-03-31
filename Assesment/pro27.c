//reucrsive program for showing tower of hanoi.
#include<stdio.h>
int count=0;
void tower_hanoi(int,char,char,char);
int main()
{
	int disk;
	char ch1,ch2,ch3;
	printf("Entre the characters :");
	tower_hanoi(3,'a','b','c');
	printf("No. of moves : %d.\n",count);
	return 0;
}
void tower_hanoi(int disk,char sour,char temp,char dest)
{
	static int n;
	if (disk == 1)
	{
		count++;
		printf("\nMove disk %d to %c --> %c.\n",n,sour,dest);
		return;
	}
	else
	{		
		n=disk-1;
		tower_hanoi(disk-1,sour,dest,temp);
		n = disk;
		tower_hanoi(1,sour,temp,dest);
		n = disk-1;
		tower_hanoi(disk-1,temp,sour,dest);
	}
}

