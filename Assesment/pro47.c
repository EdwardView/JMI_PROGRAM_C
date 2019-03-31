#include<stdio.h>
struct complexNum
{
	float real,img;
};
int main()
{
	struct complexNum c1,c2;
	float real1,comp1;

	printf("Entre the first complex number(a+ib) : \n ");
	scanf("%f%f",&c1.real,&c1.img);
	
	printf("Entre the second complex number(c+id) : \n");
	scanf("%f%f",&c2.real,&c2.img);

	real1 = c1.real + c2.real;
	comp1 = c1.img + c2.img;

	printf("Addition : %f + %f*i\n",real1,comp1);
	
	real1 = c1.real - c2.real;
        comp1 = c1.img - c2.img;
	
	printf("Substraction : %f - %f*i\n.",real1,comp1);
	
	real1 = (c1.real * c2.real) - (c1.img * c2.img);
	comp1 = (c1.real * c2.img) + (c1.img * c2.real);
	
	printf("Multiplication : %f * %f*i.\n",real1,comp1);
	
//	       division: z/w = ((a*c + b*d)/(c*c + d*d)) + ((b*c - a*d)/(c*c + d*d))*i

	real1 = ((c1.real * c2.real) + (c1.img * c2.img)) / ((c2.real * c2.real) + (c2.img * c2.img));
	comp1 = ((c1.img * c2.real) - (c1.real * c2.img)) / ((c2.real * c2.real) + (c2.img * c2.img));
	
	printf("Division  : %f + %f*i.\n",real1,comp1);
	
	return 0;
}

	
	
