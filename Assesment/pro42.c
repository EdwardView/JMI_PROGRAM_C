#include<stdio.h>
void Freq_of_char(char []);
int main()
{
	
	char str[20],temp[20];
	int i=0,count=0,j;
	printf("Entre th string :\n");
	
	gets(str);
	
	strcpy(temp,str);
	
	puts(temp);
	
	Freq_of_char(temp);
	
	return 0;
}
	
void Freq_of_char(char *temp)
{
	int i,j,count=1;
//Count the character.
	for(i=0; *(temp+i) != '\0'; i++)
	{
		count=1;
		if(*(temp+i) == '/') // Is character is count or not?
			continue;
		else
		{
			for(j=i+1; *(temp+j) != '\0'; j++)
			{
				if(*(temp+j) == '/') 
					continue;
				else
				{
					if(*(temp+i) == *(temp+j)) // count the character.
					{
						*(temp+j) = '/';
						count++;
					}
				}
			
			}
			printf("%c is %d times.\n",*(temp+i),count);
		}
	}
//	puts(temp);	

}
