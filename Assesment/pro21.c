//WAP to recursive check the length of string.
#include<stdio.h>
static int i=0;
int str_len(char *);
int main()
{
	char str[100];
	printf("Entre the Strings : \n");
	gets(str);
	printf("Length of String \n %s  is  %d.\n",str,str_len(str));
	return 0;
}
int str_len(char *str)
{
	if (*(str+i) == '\0')
		return i;
	else
	{
		i++;
		str_len(str);
	}
	return i;
}
	

 
