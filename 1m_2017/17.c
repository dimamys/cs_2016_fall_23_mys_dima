#include <stdio.h>
#include <locale.h>
double razni(double * m, int len)
{
double x,y;
int n;
x = m[0];
for (n = 0;n<len;n++)
{	if(x<m[n])
x = m[n];
}
y=m[0];
for (n=0;n<len;n++)
{	if(y>m[n])
y=m[n];
 
