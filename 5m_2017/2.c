#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10000

double F(double x)
{
	double f;
	f = sin(x) + cos(x);
	return f;
}

int main()
{

	char t;
	printf("введите точность ответа (max -9): ");
	scanf("%c", &t);
	char string[] = "%.zf\n";
	string[2] = t;
  
	float Int = 0, x, y, z, h;
	const double Pi = 3.14159;
	printf("Нижняя граница : ");
  
	scanf("%f", &y);
	printf("Верхняя граница: ");
	scanf("%f", &z);

	h = (z - y) / N;

	x = y + h;
	while (x < z)
	{

		Int = Int + 4 * F(x);
		x = x + h;
		if (x >= z) 
			break;

		Int = Int + 2 * F(x);
		x = x + h;

	}

	Int = (h / 3)*(Int + F(y) + F(z));

	printf(string, Int);

	return 0;

}
