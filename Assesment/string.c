#include<stdio.h>
#include<string.h>
#include<math.h>
double power(double,double);
double tointeger(char *,int);
char * tostring(char [],double);
//#define POWER(num,i) while(i-- <= 0)\
//			pow1 *= num;\
				 
int main()
{
	char str[10],*temps,str1[10];
	int i,len,temp,rem,dig=0;
	double num = 0;
	printf("Entre the string : ");
	scanf("%s",str);
	len = strlen(str);
	puts(str);
	/*i=0;
	while(str[i] != '\0')
	{
		num = num + (str[len-(i+1)] - '0') * power(10,i);
		printf("\n'%d\t %d '\n",str[len-(i+1) - '0'],num);
		i++;
	}*/
	num = tointeger(str,len); // convert string into integer.
	
	printf("convert(string) %s to (integer) %lf\n ",str,num);

	temps = tostring(str1,num); //convert integer into string.
	
	printf("convert(integer) %lf to (string) %s\n",num,temps);  

	/*temp = num;
	while(temp != 0)
	{
		rem = temp % 10;
		printf("%d -- %d \n",num,rem);
		dig  = rem + dig * 10;
		temp = temp / 10;
	}
	printf("\n%d --- %d \n",num,dig);*/

	return 0;
}
double power(double x,double y)
{
	int i;
	double pro = 1;
	for(i=0; i<y; i++)
		pro = pro * x;
	return pro;
}
// convert string into integer.

double tointeger(char * str,int len)
{	
	int i = 0;
	double num = 0;

 	while(*(str + i) != '\0')
        {
                num = num + (str[len - (i+1)]  - '0') * power(10,i);
                i++;
        }
	return num;
}


char * tostring(char str[],double num)
{
	long int temp = num;
	int rem,count=0,i=0;
	//count no. of digit.
	do
	{
		temp = temp/10;
		count++;
	}while(temp != 0);

	printf("\nNo. of digit in %lf is %d.\n",num,count);

	temp = num;
	str[count] = '\0';
	while(temp != 0)
	{
		rem = temp % 10;
		str[--count] = rem + '0';
		temp = temp / 10;
	}
	return str;
} 
		

		
