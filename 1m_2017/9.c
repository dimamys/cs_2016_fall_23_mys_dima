#include <stdio.h>
#include <stdlib.h>
int main()
{
int a=0;
int b=0;
int x=0;
int y=1;
int z=0;
printf("Введите N:");
scanf("%d", &b);
for(a=0; a<=b-1; ++a)
{
printf("%d\t", y);
z=x;
x=y;
y=z+x;
}
}