#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
int x=0,y=0, z=0;
char c[1000];
printf("Введите:");
gets(c);
for(y=strlen(c);y>0;--y){
if(c[y-1]=='1'){
z=z+pow(2,x);
}
x=x+1;
}
printf("%d", z);
return 0;
}