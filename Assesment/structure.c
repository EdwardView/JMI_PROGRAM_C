#include<stdio.h>
struct student
{
	int roll_no;
	char name[50];
};
typedef struct student s;
s studentdetail(void);
int main()
{
	s sd1,sd2,*sd3;
	sd1 = studentdetail();
	sd3 = &sd1;
	Edit(&sd1);
	printf("SD1 \t %d \t %s\n",sd1.roll_no,sd1.name);
//	Edit(sd3);
//	printf("SD3 \t%d \t%s \n",sd3->roll_no,sd3->name);
	return 0;
}
s studentdetail()
{
	s s1;
	printf("Entre the detail of student : \n");
	scanf("%d%s",&s1.roll_no,s1.name);
	return s1;
}
void Edit(s *s1)
{
	//s1->roll_no = 123;
	printf("value updaten \n");
	scanf("%d%s",&s1->roll_no,s1->name);
//	gets(s1->name);
}
