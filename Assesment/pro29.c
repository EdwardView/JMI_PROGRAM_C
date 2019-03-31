//recusive to check given word is palindrome or not.
#include<stdio.h>
int palindrome(char *,int,int);
int i=0;
int main()
{
	int len;
	char str[100];
	printf("entre the string/word to check that palindrome :\n");
	gets(str);
	printf("\n%d\n",strlen(str));
	if(palindrome(str,strlen(str)-1,0) == 0)
		printf("%s is palindrome.",str);
	else
		printf("%s is not palindrome.\n",str);
	return 0;
}
int palindrome(char *str,int last,int top )
{
	//printf("%d",last);
	if(last > top)
	{ 
		if(str[last] == str[top])
		{
			//printf("%c\n",str[last]);
			return palindrome(str,--last,++top);
		}
		else
		{
			//printf("ALES");
			return 1;
		}
	}
	//printf("aaa");
	return 0;
}		
		
