#include <stdio.h>
#include <stdlib.h>
int main()
{
int i=0;
int n=0;
int f1=0;
int f2=1;
int b=0;
printf("Введите N:");
scanf("%d", &n);
for(i=0; i<=n-1; ++i)
{
printf("%d\t", f2);
b=f1;
f1=f2;
f2=b+f1;
}
}