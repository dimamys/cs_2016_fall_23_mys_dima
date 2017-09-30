#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float func(float b)

{
	return x*x*x;
}

void main()

{
	float a = 0.0, b = 0.0, c=0.0, d=0.0;
	float x = 0.0, y=0.0, z=0.0;
	int i;

	printf("Нижняя граница:\n");
	scanf("%f", &c);
  
	printf("верхняя граница:\n");
	scanf("%f", &d);

	printf("шаг:\n");
	scanf("%f", &a);

	b = c;
  
	y = ((-3) * func(b) + 4 * (func(b+a)) - (func(b+2*a)))/(2*a);
	z = (1 / (2 * a))*(-func(b) + func(b + 2 * a));

	printf("%f\n", y);
	printf("%f\n", z);

	while  (b+2*a <= d)
	{
		x = (1 / (2 * a))*(func(b) - 4 * (func(b + a))+3*(func(b+2*a))
		printf("%f\n", x);
		b = b + a;

	}
}
