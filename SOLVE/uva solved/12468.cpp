#include <stdio.h>
int main()
{
int a, b,t,t1;
while (scanf("%d%d",&a,&b)==2)
{
if (a == -1 && b == -1)
{return 0;}
if (a > b)
{
if ((a - b) > 50)
{t= b + 100 - a ;
printf("%d\n",t);}
else
{printf("%d\n",a-b);}
}
else
{

if ((b - a) > 50)
{t1= a + 100 - b ;
printf("%d\n",t1);}

else
{printf("%d\n",b-a);}
}
}
return 0;
}
