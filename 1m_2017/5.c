#include <stdio.h>
#include <math.h>

int main()
{
float t1,t2;
printf("Введите t1*t2:");
scanf("%f*%f", &t1, &t2);
float s=0.0;
printf("Шаг:");
scanf("%f", &s);
float l=(fabs(t2-t1))/s;
float c = t1;
printf("   C  | F\n");

	do{
float f=1.8*c+32;
printf("|%.2f|%.2f|\n", c, f);
	c+=l;
}
while (c<t2);
printf("|%.2f|%.2f|\n", t2 ,1.8*t2+32 );
return 0;
}
