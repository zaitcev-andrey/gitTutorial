#include <stdio.h>
#include <math.h>
#define TAX 100

void main()
{
    double p,s,Nalog;
	double a,b,c;
	printf ("Введите стороны");
	   scanf_s ("%f %f %f",&a,&b,&c);
   p=(a+b+c)/2;
   s=sqrt(p*(p-a)*(p-b)*(p-c));
   Nalog=TAX*s;
	   printf ("Налог=%f",Nalog);
}
	

