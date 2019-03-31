#include<stdio.h>
int stringLength(char *);
int main()
{
	char *str;
	int leng,i=0,count=0;
	
	printf("Entre the length of array : \n");
	scanf("%d",&leng);
	str = (char *)calloc(leng,sizeof(char));

	printf("Entre the String : \n");
	getchar();
	gets(str);

	printf("length of ' %s ' is %d.\n",str,stringLength(str));
	return 0;
}
int stringLength(char * str)
{
	int i=0,count=0;
	//count the character.

	while(*(str+i) != '\0')
	{
		count++;
		i++;
	}
	return count;
}
