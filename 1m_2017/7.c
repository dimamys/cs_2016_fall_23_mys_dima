#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float result=0;
int i=0;
float a=0;
char c;
float b=0;
scanf("%f%c%f", &a, &c, &b);
switch(c)
{
case '+':
result=a+b;
printf("res=%.2f", result);
break;
case '-':
result=a-b;
printf("res=%.2f", result);
break;
case '*':
result=a*b;
printf("res=%.2f", result);
break;
case '/':
result=a / b;
printf("res=%.2f", result);
break;
case '^':
result = pow((a), b);
printf("res=%.2f", result);
break;
case '%':
result=(int)a%(int)b;
printf("res=%.2f", result);
break;
default:
printf("Error");
}
    return 0;
}
