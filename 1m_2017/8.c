#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
float x1,x2,x3 = 0.0;
float a,b,c = 0.0;
printf("Введите коэффициент A,B,C:\n");
scanf("%f, %f, %f",&a,&b,&c);
float d = b*b-4*a*c;
float d1 = pow((d),1/2);
if (d>=0)
{
if (d==0)
{
x1 = (-b*d1)/(2*a);
printf("x1=%.3f\n", x1);
}
else{
x2 = (-b*d1)/(2*a);
x3 = (-b-d1)/(2*a);
printf("x2=%.3f, x3=%.3f\n", x2, x3);
}
}
else{
printf("Нет корней \n");
}
return 0;
}