#include <stdio.h>
int factorial(int n)
{
if (n==0 || n==1) return 1;
return n * factorial(n-1);
}
int main()
{
int n;
printf("введите число:");
scanf("%d", &n);
if (n>=0)
printf("%d\n", factorial(n));
return 0;
}