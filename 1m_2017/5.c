#include <stdio.h>
#include <math.h>

int main()
{
float n1,n2;
printf("Введите t1*t2:");
scanf("%f*%f", &n1, &n2);
float s=0.0;
printf("Шаг:");
scanf("%f", &s);
float l=(fabs(n2-n1))/s;
float c = n1;
printf("   C  | F\n");

	do{
float f=1.8*c+32;
printf("|%.2f|%.2f|\n", c, f);
	c+=l;
}
while (c<n2);
printf("|%.2f|%.2f|\n", n2 ,1.8*n2+32 );
return 0;
}
