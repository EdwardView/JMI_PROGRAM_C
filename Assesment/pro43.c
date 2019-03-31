#include<stdio.h>
int main()
{
	char str[100];
	int space=0,entre=0,vtab=0,tab=0,i=0;
	printf("Entre the strings : \n");
	gets(str);
	
	while(str[i] != '\0')
	{
		
		if(str[i] == ' ')
			space++;
		
		if(str[i] == '\n')
			entre++;

		if(str[i] == '\t')
			tab++;
		if(str[i] == '\v')
			vtab++;
	i++;
	}
	entre++;
	printf("\n\n%s \n\n %d = space, %d = vtab, %d = tab, %d = entre.\n",str,space,vtab,tab,entre);
	return 0;
}
	
	
