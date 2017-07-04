#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
float 1,2,3 = 0.0;
float x,y,z = 0.0;
printf("Введите коэффициент x,y,z:\n");
scanf("%f, %f, %f",&x,&y,&z);
float a = y*y-4*x*z;
float a1 = pow((a),1/2);
if (a>=0)
{
if (a==0)
{
1 = (-y*a1)/(2*x);
printf("1=%.3f\n", 1);
}
else{
2 = (-y*a1)/(2*x);
3 = (-y-a1)/(2*x);
printf("2=%.3f, 3=%.3f\n", 2, 3);
}
}
else{
printf("Нет корней \n");
}
return 0;
}