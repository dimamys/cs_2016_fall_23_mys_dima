#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float result=0;
int i=0;
float x=0;
char y;
float z=0;
scanf("%f%y%f", &x, &y, &z);
switch(y)
{
case '+':
result=x+z;
printf("res=%.2f", result);
break;
case '-':
result=x-z;
printf("res=%.2f", result);
break;
case '*':
result=x*z;
printf("res=%.2f", result);
break;
case '/':
result=x / z;
printf("res=%.2f", result);
break;
case '^':
result = pow((x), z);
printf("res=%.2f", result);
break;
case '%':
result=(int)x%(int)z;
printf("res=%.2f", result);
break;
default:
printf("Error");
}
    return 0;
}
