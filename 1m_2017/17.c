#include <stdio.h>
#include <locale.h>
double razni(double * m, int len)
{
double x,y;
int i;
x = m[0];
for (i = 0;i<len;i++)
{	if(x<m[i])
x = m[i];
}
y=m[0];
for (i=0;i<len;i++)
{	if(y>m[i])
y=m[i];
 