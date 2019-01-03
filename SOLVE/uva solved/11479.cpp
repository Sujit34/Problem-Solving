#include<stdio.h>
int main()
{ long long int k,i,a,b,c,d,e,f;
while(scanf("%lld",&k)==1)
{ for(i=1;i<=k;i++)
{scanf("%lld %lld %lld",&a,&b,&c);
d=a+b;e=a+c;f=b+c;
if(d>c&&e>b&&f>a)
{ if(a==b&&b==c&&c==a)
printf("Case %lld: Equilateral\n",i);
else if(a==b||a==c||b==c)
printf("Case %lld: Isosceles\n",i);
else if(a!=b&&a!=c&&c!=b)
printf("Case %lld: Scalene\n",i);}
else
printf("Case %lld: Invalid\n",i); } }
return 0; }
